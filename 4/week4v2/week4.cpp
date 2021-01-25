#include <iostream>
#include "sparseMatrix.h"

int main()
{
    std::cout << "Matrix1:" << std::endl;
    sparseMatrix sp(5, 5);
    sp.generate();
    std::cout << std::endl;
    sp.printSparse();
    std::cout << std::endl;
    sp.printNormal();

    std::cout << "Matrix2:" << std::endl;
    sparseMatrix sp1(5, 5);
    sp1.generate();
    std::cout << std::endl;
    sp1.printSparse();
    std::cout << std::endl;
    sp1.printNormal();

    std::cout << "Matrix1 + Matrix2 =" << std::endl;
    sparseMatrix sp2(5, 5);
    sp2 = sp1 + sp;
    std::cout << std::endl;
    sp2.printSparse();
    std::cout << std::endl;
    sp2.printNormal();

    double value;
    std::cout << "input value to delete: ";
    std::cin >> value;
    sp2.deleteByValue(value);

    std::cout << std::endl;
    sp2.printSparse();
    std::cout << std::endl;
    sp2.printNormal();

    /*do {
        int i, j, val;
        std::cout << "i = ";
        std::cin >> i;
        std::cout << "j = ";
        std::cin >> j;
        std::cout << "val = ";
        std::cin >> val;
        sp.setElement(val, i, j);
        system("cls");
        sp.printSparse();
        std::cout << std::endl;
        sp.printNormal();
    } while (true);*/

    system("pause");
    return 0;
}