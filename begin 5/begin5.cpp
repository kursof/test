#include <iostream>

int main()
{
	//��������� ����� � ������� ����������� ���� ��� ��������� �����

	int a, S, V;

	std::cout << "enter the edge of the cube\n";
	std::cin >> a; //���� �����

	V = a * a * a; //������� �������
	S = 6 * a * a; //� ������

	std::cout << "square and volume are " << S << " and " << V << "\n";//����� ������

	return 0;
}
