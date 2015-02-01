#include <iostream>
#include <cmath>

/*Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P:
c = (a2 + b2)1/2,        P = a + b + c.*/

int main ()

{
    int a,b,c, P;
    std:: cout << "enter the edges of the triangle\n";
    std:: cin >> a >> b;

    c=sqrt(a*a+b*b);
    P=a+b+c;

    std:: cout << "length of the third edge of the triangle is " << c << "\n";
    std:: cout << "perimeter of the triangle is " << P << "\n";

    return 0;
}
