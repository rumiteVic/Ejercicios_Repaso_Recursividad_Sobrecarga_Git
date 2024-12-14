#include <iostream>

bool Primo(int num, int divisor) {
	if (divisor == 1) {
		return true;
	}
	if (num % divisor == 0) {
		return false;
	}
	return Primo(num, divisor - 1);
}

void main() {
	int num;
	int divisor;
	std::cout << "Pon un numero para saber si es primo o no: ";
	std::cin >> num;
	divisor = num - 1;

	if (Primo(num, num - 1)) {
		std::cout << "Es primo";
	}
	else {
		std::cout << "No es primo";
	}


}