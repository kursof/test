/* ���� ��� ��������������� ����� a � b. ����� �� ������� ��������������,
 * �. �. ���������� ������ �� �� ������������: (a�b)1/2
 */

#include <iostream>
#include <cmath>

int main ()
{
    float a, b, c;

    std::cout << "enter a and b\n";
    std::cin >> a >> b;

    c = sqrt(a * b);

    std::cout << "result is " << c << '\n';

    return 0;
}
