#include <iostream>

unsigned long Fibonacci(unsigned long num, unsigned long &anteriorAnterior, unsigned long &anterior, unsigned long &actual, unsigned long n) {
	if (n != num) {
		if (num == 0) {
			return 0;
		}
		else if (num == 1) {
			return 1;
		}
		else {
			actual = anterior + anteriorAnterior;
			std::cout << actual << "\n";
			anteriorAnterior = anterior;
			anterior = actual;
			n++;
			return actual;
		}
	}
	
}


void main() {
	unsigned long num;
	unsigned long anteriorAnterior = 0;
	unsigned long anterior = 1;
	unsigned long actual;
	unsigned long n = 2;
	std::cout << "Ponga un numero: ";
	std::cin >> num;
	if (num == 0) {
		std::cout << "0\n";
	}
	for (int a = 0; a < num; a++) {
		if (a == 0) {
			std::cout << "0\n";
		}
		if (a == 1) {
			std::cout << "1\n";
		}
		Fibonacci(num, anteriorAnterior, anterior, actual, n);
	}
}