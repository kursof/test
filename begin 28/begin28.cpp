/*���� ����� A. ��������� A15, ��������� ��� ��������������� ����������
� ���� �������� ���������.
��� ����� ��������������� �������� A2, A3, A5, A10, A15.
������� ��� ��������� ������� ����� A.*/


#include <iostream>
#include <cmath>

int main ()
{
	double a, b, c;

	std::cout << "enter a: ";
	std::cin >> a;

	b = pow(a,2);
	c = pow(b,5);

	std::cout << "a^2 is: " << b << "\n"

	<< "a^3 is: " << b * a << "\n"

	<< "a^5 is: " << c << "\n"

	<< "a^10 is: " << c * c << "\n"

	<< " a^15 is: " << c * c * c << "\n";// � ���� ���������� ������ �������� *

	return 0;
}
