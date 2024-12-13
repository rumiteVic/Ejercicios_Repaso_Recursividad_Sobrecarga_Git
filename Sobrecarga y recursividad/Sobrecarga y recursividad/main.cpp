#include <iostream>

unsigned long long Factorial(unsigned long long num) {
	long long factorial = 0;
	if (num != 1) {
		return num * Factorial(num - 1);
	}

}

void main() {
	unsigned long long num;
	std::cout << "Ponga un numero para factorizar: ";
	std::cin >> num;

	unsigned long long resultado = Factorial(num);
	std::cout << resultado;
}