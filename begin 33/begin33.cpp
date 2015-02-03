/*Известно, что X кг конфет стоит A рублей.
Определить, сколько стоит 1 кг и Y кг этих же конфет*/

#include <iostream>

int main ()
{
	float x, y, a;

	std::cout << "how many kilogramm of sweets do you have?: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "how much is it?: ";
	std::cin >> a;

	std::cout << "\n";
	std::cout << "you can buy 1 kilogram of sweets with: " << a / x
	<< " rubles" << "\n";

	std::cout << "how many kilograms of sweets do you want to buy: ";
	std::cin >> y;
	std::cout << "\n";

	std::cout << "you need: " << (a / x)*y << " rubles";

	return 0;
}
