#include <iostream>

int main ()
{
    int a,b,S,P;

    std:: cout << "Enter a,b " << std:: endl; // ввод двух сторон прямоугольника

    std:: cin >> a >> b;

    S=a*b;
    P=(a+b)*2;

    std:: cout << "Square is " << S << "\n"  << "Perimeter is " << P << std:: endl;


    return 0;

}
