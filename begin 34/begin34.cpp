/* ��������, ��� X �� ���������� ������ ����� A ������,
 * � Y �� ������ ����� B ������.
 * ����������, ������� ����� 1 �� ���������� ������,
 * 1 �� ������, � ����� �� ������� ��� ���������� ������� ������ ������.
 */

#include <iostream>

int main()
{
	float x, y;
	float a, b;

	std::cout << "skolko kilogramov konfet vy kupili?: ";
	std::cin >> x;

	std::cout << "\nskolko stoyat konfety?: ";
	std::cin >> a;

	std::cout << "\nskolko kilogramov irisok vy kupili?: ";
	std::cin >> y;

	std::cout << "\nskolko stoyat iriski?: ";
	std::cin >> b;

	std::cin >> b; std::cout << "\n";

	std::cout << "\n1 kilogram konfet stoit: " << a/x << " rubley\n"
		<< "1 kilogram irisok stoit: " << b/y << " rubley\n";

	std::cout << "1 kilogram konfet stoit bolshe 1 kiograma irisok v: "
		<< ( a * y ) / ( b * x ) << " raz\n";

	return 0;
}
