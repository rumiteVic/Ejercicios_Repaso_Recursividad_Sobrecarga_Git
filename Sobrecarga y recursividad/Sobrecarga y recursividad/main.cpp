#include <iostream>

double Exponentes( double base, int exponente) {
	if (exponente == 0) {
		return 1;
	}
	return base * Exponentes(base, exponente -1);
}


void main() {
	int base;
	int exponente;
	std::cout << "Ponga un numero para la base: ";
	std::cin >> base;
	std::cout << "Ponga un numero para el exponente: ";
	std::cin >> exponente;
	unsigned long long resultado = Exponentes(base, exponente);
	std::cout << "El resultado es este: " << resultado;
}