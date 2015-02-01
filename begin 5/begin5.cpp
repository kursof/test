#include <iostream>

int main ()
{int a,S,V;
//посчитать объем и площадь поверхности куба при известном ребре
    std::cout << "enter the edge of the cube\n" ;
    std::cin >> a;//ввод ребра

    V= a*a*a;//подсчет площади

    S=6*a*a;//и объема

    std::cout << "square and volume are " << S << " and " << V << "\n";//вывод данных

    return 0;
}
