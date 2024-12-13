#include <iostream>
int CuentaAtras(int& num, int& n) {
	if (n != 1) {
		std::cout << n << "\n";
		n--;
		CuentaAtras(num, n);
	}
}

void main() {
	int num;
	int n;
	std::cout << "Pon un numero: ";
	std::cin >> num;
	n = num;
	CuentaAtras(num, n);
}
