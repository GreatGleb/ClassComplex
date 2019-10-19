#include <iostream>
#include <random>
#include <iomanip>
#include "Complex.h"

using namespace std;


int main() {
	std::mt19937 gen(time(0));
	std::uniform_int_distribution<> dis(0, 100000);

	//double a = dis(gen), b = dis(gen), c = dis(gen), d = dis(gen);
	//a /= 1000; b /= 1000; c /= 1000; d /= 1000;
	int a = 3, b = 8, c = 7, d = 9;
	Complex c1(a, b);
	Complex c2(c, d);
	Complex r = c1 + c2;
	Complex a6 = c1 - r;
	Complex a7 = a6*c2;
	Complex a9 = a7 / c2;
	Complex a10;
	std::cout << a6;
	std::cout << a7;
	std::cout << a9;
	std::cin >> a10;
	std::cout << a10;
	a10.set(a, b);
	std::cout << a10;

	//cout << fixed << setprecision(3) << a << endl;
	//cout << b << '\n';
	//cout << c << '\n';
	//cout << d << '\n';
	system("pause");

	return 0;
}
