#include <cstdlib>

struct element {//non zero
    double value;
    element* successorRight, *successorDown, *predcessorLeft, *predcessorUp;
    int row, column;
};

class sparseMatrix {
public:
    sparseMatrix(int N, int M) {
        this->rowsAmount = N;
        this->columnsAmount = M;
        row = new element*[N];
        for (int i = 0; i < N; i++)
            row[i] = NULL;
        column = new element*[M];
        for (int i = 0; i < M; i++)
            column[i] = NULL;
    }
    /*~sparseMatrix() {
        for (int i = 0; i < this->rowsAmount; i++) {
            element* currentCheck = row[i];
            if (currentCheck != NULL) {
                while (currentCheck->successorRight != NULL) {
                    currentCheck = currentCheck->successorRight;
                        deleteElement(currentCheck->predcessorLeft);//Exception thrown: read access violation. currentCheck was 0xDDDDDDDD.
                }
                delete currentCheck;
            }
        }
    }*/

    void generate();
    void printNormal();
    void printSparse();
    void setElement(double value, int i, int j);
    double getElement(int i, int j);
    void deleteByValue(double value);//
    //operator A[i][j] =(undone)
    //operator *(for matrix*matrix)
    //operator *(for matrix*number)

    sparseMatrix operator+ (sparseMatrix& matrix2);
    sparseMatrix& operator= (sparseMatrix matrix2);

private:
    int rowsAmount, columnsAmount;
    element** row, **column;

    element* searchByValue(double value);//returns pointer to first element with this value(top to down, left to right search), NULL if none exist or value = 0
    element* searchByIndex(int row, int column);//works as get
    void deleteElement(element* delElement);
    void insertBeforeVertical(element* newElement, element* successorForNew);
    void insertBeforeHorizontal(element* newElement, element* successorForNew);
    void insertAfterVertical(element* newElement, element* predcessorForNew);
    void insertAfterHorizontal(element* newElement, element* predcessorForNew);
};