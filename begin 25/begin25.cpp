#include <iostream>
#include <cmath>

/*
Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
*/
int main ()
{
    float x, y;

    std::cout << "enter x\n";
    std::cin >> x;

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    std::cout << "y is " << y;

    return 0;
}
