#include "sparseMatrix.h"
#include <cstdlib>
#include <iostream>
#include <random>
#include <chrono>

void sparseMatrix::generate() {
    typedef std::chrono::high_resolution_clock myclock;
    myclock::time_point beginning = myclock::now();
    int maxNonZero = static_cast<int>(floor(0.3 * this->rowsAmount * this->columnsAmount));
    std::uniform_int_distribution<int> coinflip(0, 1);
    std::uniform_int_distribution<int> rDistribution(0, this->rowsAmount - 1);
    std::uniform_int_distribution<int> cDistribution(0, this->columnsAmount - 1);
    std::uniform_real_distribution<double> vDistribution(-32768.0, 32767.0);
    myclock::duration d = myclock::now() - beginning;
    unsigned seed = d.count();
    std::default_random_engine generator(seed);
    for (int i = 0; i < maxNonZero; i++) {
        bool zero = coinflip(generator);//0 or 1
        if (!zero) {
            double val = vDistribution(generator);
            bool gen = false;
            int row, column;
            do {
                row = rDistribution(generator);
                column = cDistribution(generator);
                if (this->checkForExistance(row, column) == NULL)
                    gen = true;
            } while (!gen);
            this->changeElement(val, row, column);
        }
    }
    /*for (int i = 0; i < maxNonZero; i++) {
        bool zero = rand() / INT_MAX;//0 or 1
        if (!zero) {
            double val = rand();
            bool gen = false;
            int row, column;
            do {
                row = rand() % this->rowsAmount;
                column = rand() % this->columnsAmount;
                if (this->checkForExistance(row, column) != NULL)
                    gen = true;
            } while (!gen);
            this->changeElement(val, row, column);
        }
    }*/
}

void sparseMatrix::changeElement(double value, int i, int j) {//????????
    
    element* currentCheck = this->checkForExistance(i, j);
    if (currentCheck != NULL) {
        if(value != 0)
            currentCheck->value = value;
        else {
            this->deleteElement(currentCheck);
        }
    }
    else {//connect with *successorRight, *successorDown, *predcessorLeft, *predcessorUp
        element* newElement = new element;
        newElement->value = value;
        newElement->row = i;
        newElement->column = j;//
        bool found = false, allChecked = false;
        //find first with bigger i
        currentCheck = this->column[j];
        if (currentCheck == NULL) {
            newElement->predcessorUp = newElement;
            newElement->successorDown = newElement;
            this->column[j] = newElement;
        }
        else {
            do {
                currentCheck = currentCheck->successorDown;//next row
                if (currentCheck == this->column[j])//check for end of loop
                    allChecked = true;
                if (currentCheck->row > i)
                    found = true;
            } while (!allChecked || !found);
            insertBeforeVertical(newElement, currentCheck);

        }
        //find first with bigger j
        found = false;
        allChecked = false;
        currentCheck = this->row[i];
        if (currentCheck == NULL) {
            newElement->predcessorLeft = newElement;
            newElement->successorRight = newElement;
            this->row[i] = newElement;
        }
        else {
            do {
                currentCheck = currentCheck->successorRight;//next row
                if (currentCheck == this->row[i])//check for end of loop
                    allChecked = true;
                if (currentCheck->column > j)
                    found = true;
            } while (!allChecked || !found);
            insertBeforeHorizontal(newElement, currentCheck);
        }
    }
}

element* sparseMatrix::checkForExistance(int i, int j) {
    if ((this->row[i] == NULL) || (this->column[j] == NULL))
        return NULL;

    bool exists = false, allChecked = false;
    element* currentCheck;
    if (i < j) {
        currentCheck = this->column[j];
        if (currentCheck->row == i)
            exists = true;
        do {
            currentCheck = currentCheck->successorDown;//next row
            if (currentCheck == this->column[j])//check for end of loop
                allChecked = true;
            if (currentCheck->row == i)
                exists = true;
        } while (!allChecked || !exists);
    }
    else {
        currentCheck = this->row[i];
        if (currentCheck->column == j)
            exists = true;
        do {
            currentCheck = currentCheck->successorRight;//next row
            if (currentCheck == this->row[i])//check for end of loop
                allChecked = true;
            if (currentCheck->column == j)
                exists = true;
        } while (!allChecked || !exists);
    }

    if (!exists)
        currentCheck = NULL;
    return currentCheck;
}

void sparseMatrix::printNormal() {
    element* current;
    for (int i = 0; i < this->rowsAmount; i++) {
        for (int j = 0; j < this->columnsAmount; j++) {
            current = checkForExistance(i, j);
            if (current == NULL)
                std::cout << "0";
            else
                std::cout << current->value;
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void sparseMatrix::printSparse() {
    element* current;
    for (int i = 0; i < this->rowsAmount; i++) {
        for (int j = 0; j < this->columnsAmount; j++) {
            current = checkForExistance(i, j);
            if (current != NULL) {
                std::cout << "r = " << current->row << ";";
                std::cout << "c = " << current->column << ";";
                std::cout << "v = " << current->value << ";";
                std::cout << std::endl;
            }   
        }
    }
}

void sparseMatrix::insertBeforeVertical(element* newElement, element* successorForNew) {
    newElement->successorDown = successorForNew;
    newElement->predcessorUp = successorForNew->predcessorUp;
    successorForNew->predcessorUp->successorDown = newElement;
    successorForNew->predcessorUp = newElement;
}

void sparseMatrix::insertBeforeHorizontal(element* newElement, element* successorForNew) {
    newElement->successorRight = successorForNew;
    newElement->predcessorLeft = successorForNew->predcessorLeft;
    successorForNew->predcessorLeft->successorRight = newElement;
    successorForNew->predcessorLeft = newElement;
}

void sparseMatrix::deleteElement(element* delElement) {
    if (delElement->successorRight != delElement) {//deleting from row
        delElement->predcessorLeft->successorRight = delElement->successorRight;
        delElement->successorRight->predcessorLeft = delElement->predcessorLeft;
    }
    if (delElement->successorDown != delElement) {//deleting from column
        delElement->predcessorUp->successorDown = delElement->successorDown;
        delElement->successorDown->predcessorUp = delElement->predcessorUp;
    }
    delete delElement;
}

double sparseMatrix::getElement(int i, int j) {
    element* elmnt = checkForExistance(i, j);
    if (elmnt == NULL)
        return 0;
    return elmnt->value;
}