#include <iostream>

/*�������� ������� ���������� ���������� A � B � ������� ����� �������� A � B.*/

int main ()

{
    float A,B;

    std::cout << "enter A and B\n";
    std::cin >> A >> B;

    A = A + B;
    B = A - B;
    A = A - B;

    std::cout << "A is " << A << "\n";
    std::cout << "B is " << B << "\n";

    return 0;
}
