/* ���� ����� A. ��������� A8,
��������� ��������������� ���������� � ��� �������� ���������.
��� ����� ��������������� �������� A2, A4, A8.
������� ��� ��������� ������� ����� A. */

#include <iostream>
#include <cmath>

int main ()
{
	int A;

	std::cout << "enter A\n";
	std::cin >> A;

	std::cout << "A^2 is: " << pow(A , 2) << "\n"
	<< "A^4 is: " << pow(A , 4) << "\n"
	<< "A^8 is: " << pow(A , 8) << "\n";

	return 0;
}
