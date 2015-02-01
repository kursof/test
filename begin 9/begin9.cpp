#include <iostream>
#include <cmath>
/*Даны два неотрицательных числа a и b. Найти их среднее геометрическое, т. е. квадратный корень из их произведения: (a·b)1/2*/
int main ()

{
    float a,b,c;

    std:: cout << "enter a and b\n";
    std:: cin >> a >> b;

    c=sqrt(a*b);

    std:: cout << "result is " << c ;

    return 0;

}
