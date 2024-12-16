#include <iostream>

bool palindromo(std::string palabra, int &cantidadLetras, int &cantidadComprobar) {
	if (cantidadComprobar < palabra.size()) {
		if (palabra[cantidadComprobar] != palabra[cantidadLetras]) {
			return false;
		}
		else {
			cantidadComprobar++;
			cantidadLetras--;
			if (cantidadLetras == 0 && palabra[cantidadComprobar] == palabra[cantidadLetras]) {
				return true;
			}
			palindromo(palabra, cantidadLetras, cantidadComprobar);
			
		}
	}
}

void main() {
	std::string palabra;
	int cantidadLetras;
	int cantidadComprobar = 0;
	std::cout << "Ponga una palabra ";
	std::cin >> palabra;
	cantidadLetras = palabra.size() -1;
	if (palindromo(palabra, cantidadLetras, cantidadComprobar)) {
		std::cout << "Es un palindromo";
	}
	else {
		std::cout << "No es un palindromo";
	}
		
}