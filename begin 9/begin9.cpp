#include <iostream>
#include <cmath>
/*���� ��� ��������������� ����� a � b. ����� �� ������� ��������������, �. �. ���������� ������ �� �� ������������: (a�b)1/2*/
int main ()

{
    float a,b,c;

    std:: cout << "enter a and b\n";
    std:: cin >> a >> b;

    c=sqrt(a*b);

    std:: cout << "result is " << c ;

    return 0;

}
