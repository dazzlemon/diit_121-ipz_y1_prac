#include "sparseMatrix.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
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
                if (this->searchByIndex(row, column) == NULL)
                    gen = true;
            } while (!gen);
            this->setElement(val, row, column);
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
                if (this->searchByIndex(row, column) != NULL)
                    gen = true;
            } while (!gen);
            this->setElement(val, row, column);
        }
    }*/
}

void sparseMatrix::setElement(double value, int i, int j) {//????????
    
    element* currentCheck = this->searchByIndex(i, j);
    if (currentCheck != NULL) {
        if(value != 0)
            currentCheck->value = value;
        else
            this->deleteElement(currentCheck);
    }
    else {//connect with *successorRight, *successorDown, *predcessorLeft, *predcessorUp
        if (value != 0) {
            element* newElement = new element;
            newElement->value = value;
            newElement->row = i;
            newElement->column = j;//
            bool found = false;
            //find first with bigger i
            currentCheck = this->column[j];
            if (currentCheck == NULL) {
                newElement->predcessorUp = NULL;
                newElement->successorDown = NULL;
                this->column[j] = newElement;
            }
            else {
                while ((currentCheck != NULL) && (currentCheck->successorDown != NULL) && !found) {
                    currentCheck = currentCheck->successorDown;//next row
                    if (currentCheck->row > i)
                        found = true;
                }
                if (found)
                    insertBeforeVertical(newElement, currentCheck);
                else
                    insertAfterVertical(newElement, currentCheck);
            }
            //find first with bigger j
            found = false;
            currentCheck = this->row[i];
            if (currentCheck == NULL) {
                newElement->predcessorLeft = NULL;
                newElement->successorRight = NULL;
                this->row[i] = newElement;
            }
            else {
                while ((currentCheck != NULL) && (currentCheck->successorRight != NULL) && !found) {
                    currentCheck = currentCheck->successorRight;//next row
                    if (currentCheck->column > j)
                        found = true;
                }
                if (found)
                    insertBeforeHorizontal(newElement, currentCheck);
                else
                    insertAfterHorizontal(newElement, currentCheck);
            }
        }
    }
}

element* sparseMatrix::searchByIndex(int i, int j) {
    if ((this->row[i] == NULL) || (this->column[j] == NULL))
        return NULL;

    bool exists = false;
    element* currentCheck;
    if (i < j) {
        currentCheck = this->column[j];
        if (currentCheck->row == i)
            exists = true;
        while ((currentCheck != NULL) && (currentCheck->successorDown != NULL) && !exists) {
            currentCheck = currentCheck->successorDown;//next row
            if (currentCheck->row == i)
                exists = true;
        }
    }
    else {
        currentCheck = this->row[i];
        if (currentCheck->column == j)
            exists = true;
        while ((currentCheck != NULL) && (currentCheck->successorRight != NULL) && !exists) {
            currentCheck = currentCheck->successorRight;//next row
            if (currentCheck->column == j)
                exists = true;
        }
    }

    if (!exists)
        currentCheck = NULL;
    return currentCheck;
}

void sparseMatrix::printNormal() {
    element* current;
    std::cout << std::left;
    for (int i = 0; i < this->rowsAmount; i++) {
        for (int j = 0; j < this->columnsAmount; j++) {
            current = searchByIndex(i, j);
            if (current == NULL)
                std::cout << std::setw(14) << "0";
            else
                std::cout << std::setw(14) << std::setprecision(6) << std::fixed << current->value;
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::right;
}

void sparseMatrix::printSparse() {
    element* current;
    for (int i = 0; i < rowsAmount; i++) {
        current = row[i];
        while (current != NULL) {
            std::cout << "r = " << current->row << ";";
            std::cout << "c = " << current->column << ";";
            std::cout << "v = " << current->value << ";";
            std::cout << std::endl;
            current = current->successorRight;
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

void sparseMatrix::insertAfterVertical(element* newElement, element* predcessorForNew) {
    newElement->predcessorUp = predcessorForNew;
    newElement->successorDown = predcessorForNew->successorDown;
    if(predcessorForNew->successorDown != NULL)
        predcessorForNew->successorDown->predcessorUp = newElement;
    predcessorForNew->successorDown = newElement;
}

void sparseMatrix::insertAfterHorizontal(element* newElement, element* predcessorForNew) {
    newElement->predcessorLeft = predcessorForNew;
    newElement->successorRight = predcessorForNew->successorRight;
    if (predcessorForNew->successorRight != NULL)
        predcessorForNew->successorRight->predcessorLeft = newElement;
    predcessorForNew->successorRight = newElement;
}

void sparseMatrix::deleteElement(element* delElement) {
    if(delElement->predcessorLeft != NULL)
        delElement->predcessorLeft->successorRight = delElement->successorRight;
    if(delElement->predcessorUp != NULL)
        delElement->predcessorUp->successorDown = delElement->successorDown;
    if(delElement->successorRight != NULL)
        delElement->successorRight->predcessorLeft = delElement->predcessorLeft;
    if(delElement->successorDown != NULL)
        delElement->successorDown->predcessorUp = delElement->predcessorUp;
    if (this->row[delElement->row] == delElement)
        this->row[delElement->row] = delElement->successorRight;
    if (this->column[delElement->column] == delElement)
        this->column[delElement->column] = delElement->successorDown;
    delete delElement;
}

double sparseMatrix::getElement(int i, int j) {
    element* elmnt = searchByIndex(i, j);
    if (elmnt == NULL)
        return 0;
    return elmnt->value;
}

sparseMatrix sparseMatrix::operator+ (sparseMatrix& matrix2) {
    sparseMatrix* matrixResulting = new sparseMatrix(this->rowsAmount, this->columnsAmount);
    double a3;
    for (int i = 0; i < matrixResulting->rowsAmount; i++) {
        for (int j = 0; j < matrixResulting->columnsAmount; j++) {
            a3 = this->getElement(i, j) + matrix2.getElement(i, j);
            matrixResulting->setElement(a3, i, j);
        }
    }
    return *matrixResulting;
}

sparseMatrix& sparseMatrix::operator= (sparseMatrix matrix2) {
    this->rowsAmount = matrix2.rowsAmount;
    this->columnsAmount = matrix2.columnsAmount;
    for (int i = 0; i < this->rowsAmount; i++)
        row[i] = NULL;
    for (int i = 0; i < this->columnsAmount; i++)
        column[i] = NULL;
    element* currentDonator;
    for (int i = 0; i < rowsAmount; i++) {
        currentDonator = matrix2.row[i];
        while (currentDonator != NULL) {
            this->setElement(currentDonator->value, currentDonator->row, currentDonator->column);
            currentDonator = currentDonator->successorRight;
        }
    }
    return *this;
}

element* sparseMatrix::searchByValue(double value) {
    if (value == 0)
        return NULL;
    bool found = false;
    element* currentCheck = this->row[0];//
    for (int i = 0; (i < this->rowsAmount) && (found == false); i++) {
        currentCheck = this->row[i];
        if (currentCheck != NULL) {
            if (fabs(currentCheck->value - value) <= pow(10,-6))
                found = true;
            while ((currentCheck->successorRight != NULL) && (found == false)) {
                currentCheck = currentCheck->successorRight;
                if (fabs(currentCheck->value - value) <= pow(10, -6))
                    found = true;
            }
        }
    }
    if (!found)
        currentCheck = NULL;
    return currentCheck;
}

void sparseMatrix::deleteByValue(double value) {
    element* delElement = this->searchByValue(value);
    if (delElement != NULL)
        this->deleteElement(delElement);
}