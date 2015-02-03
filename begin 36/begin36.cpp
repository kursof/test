/*Скорость первого автомобиля V1 км/ч, второго — V2 км/ч,
расстояние между ними S км. Определить расстояние между ними через T часов,
если автомобили удаляются друг от друга, двигаясь в противоположных направлениях.
Данное расстояние равно сумме начального расстояния и общего пути,
проделанного автомобилями; общий путь = время · суммарная скорость.*/

#include <iostream>

int main ()
{
	float v1, v2;
	float s, t;

	std::cout << "enter first velocity: ";
	std::cin >> v1; std::cout << "\n";

	std::cout << "enter second velocity: ";
	std::cin >> v2; std::cout << "\n";

	std::cout <<  "what is the distance between two cars at the first moment?: ";
	std::cin >> s; std::cout << "\n";

	std::cout << "how much time does the cars move?: ";
	std::cin >> t; std::cout << "\n";

	std::cout << "the distance between cars in the end is: "
	<< s + t * ( v1 + v2) << "\n";

	return 0;
}
