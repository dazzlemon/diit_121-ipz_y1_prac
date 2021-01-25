#include <iostream>
#include "sparseMatrix.h"

int main()
{
    sparseMatrix sp(5, 5);
    sp.printSparse();
    std::cout << std::endl;
    sp.printNormal();

    sp.generate();
    std::cout << std::endl;

    /*int i, j, val;
    std::cout << "i = ";
    std::cin >> i;
    std::cout << "j = ";
    std::cin >> j;
    std::cout << "val = ";
    std::cin >> val;
    sp.changeElement(val, i, j);
    std::cout << sp.checkForExistance(i, j);*/
     
    sp.printSparse();
    std::cout << std::endl;
    sp.printNormal();

    system("pause");
    return 0;
}