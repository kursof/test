/*������ �������� ��������� A�x + B = 0,
�������� ������ �������������� A � B (����������� A �� ����� 0).*/

#include <iostream>

int main ()

{
	float a, b;

	std::cout << "enter a and b: ";
	std::cin >> a >> b; std::cout << "\n";

	std::cout << "x is: " << (- b)/a;

	return 0;
}
