/* �������� ����� � ������� ���� V ��/�, �������� ������� ���� U ��/� (U < V).
 * ����� �������� ����� �� ����� T1 �, � �� ���� (������ �������) � T2 �.
 * ���������� ���� S, ���������� ������ (���� = ����� � ��������).
 * ������, ��� ��� �������� ������ ������� ��������
 * ����� ����������� �� �������� �������� �������
 */

#include <iostream>

int main()

{
	float v, u;
	float t1, t2;

	std::cout << "ukazhite skorost lodki v stoyachey vode: ";
	std::cin >> v;

	std::cout << "\nukazhite skorost techeniya: ";
	std::cin >> u;

	std::cout << "\nskolko vremeni lodka plyla po ozeru?: ";
	std::cin >> t1;

	std::cout << "\nskolko vremeni lodka plula protiv techeniya reki?: ";
	std::cin >> t2;

	std::cout << "\nlodka proshla: " << v * t1 + (v - u) * t2 << "\n";

	return 0;
}
