#include <iostream>



unsigned long Fibonacci(unsigned long num, unsigned long&total, unsigned long&total2) {
	int n = 0;
	if (n != num) {
		return n;
	}
}


void main() {
	unsigned long num;
	unsigned long total = 0;
	unsigned long total2 = 0;
	std::cout << "Ponga un numero: ";
	std::cin >> num;
	if (num != 0 && num != 1 && num != 2) {
		Fibonacci(num, total, total2);
	}
	else if (num == 0) {
		std::cout << "0";
	}
	else if (num == 1) {
		std::cout << "0\n1";
	}
	else if (num == 2) {
		std::cout << "0\n1\n1";
	}
	

}