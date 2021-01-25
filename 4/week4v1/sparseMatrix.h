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
    ~sparseMatrix() {
        for (int i = 0; i < this->rowsAmount; i++) {
            element* currentCheck = row[i];
            if (currentCheck != NULL) {
                while (currentCheck->successorRight != NULL) {
                    currentCheck = currentCheck->successorRight;
                    delete (currentCheck->predcessorLeft);
                }
                delete currentCheck;
            }
        }
    }

    void changeElement(double value, int i, int j);
    void generate();
    void printNormal();
    void printSparse();
    double getElement(int i, int j);//returns value

private:
    int rowsAmount, columnsAmount;
    element** row, **column;

    element* checkForExistance(int row, int column);//works as get
    void deleteElement(element* delElement);
    void insertBeforeVertical(element* newElement, element* successorForNew);
    void insertBeforeHorizontal(element* newElement, element* successorForNew);
};