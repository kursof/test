/* �������� ������� ���������� V1 ��/�, ������� � V2 ��/�,
 * ���������� ����� ���� S ��. ���������� ���������� ����� ���� ����� T �����,
 * ���� ���������� ��������� ���� �� �����, �������� � ���������������
 * ������������.
 * ������ ���������� ����� ����� ���������� ���������� � ������ ����,
 * ������������ ������������; ����� ���� = ����� � ��������� ��������.
 */

#include <iostream>

int main()
{
	float v1, v2;
	float s, t;

	std::cout << "enter first velocity: ";
	std::cin >> v1;

	std::cout << "\nenter second velocity: ";
	std::cin >> v2;

	std::cout <<  "\nwhat is the distance between two cars"
		<< "at the first moment?: ";
	std::cin >> s;

	std::cout << "\nhow much time does the cars move?: ";
	std::cin >> t;

	std::cout << "\nthe distance between cars in the end is: "
		<< s + t * ( v1 + v2) << "\n";

	return 0;
}
