//���� ��� ������� ��������������� ����� ����� � ������� �����������

#include <iostream>

int main ()
{
    int a, b, c, V, S;
    std::cout << "enter three edges\n"; //����������� � �����
    std::cin >> a >>  b >>  c; //���� ������

    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);

    std::cout << "square is " << S << " and " << "volume is " << V; //����� ������

    return 0;
}
