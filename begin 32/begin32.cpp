/*Дано значение температуры T в градусах Цельсия.
Определить значение этой же температуры в градусах Фаренгейта.
Температура по Цельсию TC и температура по Фаренгейту TF
связаны следующим соотношением:
TC = (TF − 32)·5/9.*/

#include <iostream>

int main ()
{
	float  cel;

	std::cout << "enter t in cel: ";
	std::cin >> cel;

	std::cout << "t in fahr is: " << (cel * 9) / 5 + 32;

	return 0;
}
