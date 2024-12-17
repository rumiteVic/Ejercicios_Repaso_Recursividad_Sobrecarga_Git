#include <iostream>

float CalcularSuma(int &num1, int &num2,float &nume1, float &nume2, bool &decimales) {
	if (!decimales) {
		return num1 + num2;
	}
	else {
		return nume1 + nume2;
	}
}

float CalcularResta(int& num1, int& num2, float& nume1, float& nume2, bool& decimales) {
	if (!decimales) {
		return num1 - num2;
	}
	else {
		return nume1 - nume2;
	}
}

float CalcularMultiplicacion(int& num1, int& num2, float& nume1, float& nume2, bool& decimales) {
	if (!decimales) {
		return num1 * num2;
	}
	else {
		return nume1 * nume2;
	}
}

float CalcularDivision(int& num1, int& num2, float& nume1, float& nume2, bool& decimales) {
	if (!decimales) {
		return num1 / num2;
	}
	else {
		return nume1 / nume2;
	}
}

void main() {
	int elige;
	bool elija = false;
	bool decimales = false;
	bool divide = false;
	int elegirQueHacer;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	int num1;
	int num2 = 1;
	float nume1;
	float nume2 = 1;
	std::cout << "Ponga 1 para valores enteros o 0 para valores decimales: ";

	while (!elija) {
		std::cin >> elige;
		if (elige == 0) {
			elija = true;
			decimales = true;
		}
		else if (elige == 1) {
			elija = true;
			decimales = false;
		}
	}
	elija = false;
	std::cout << "Elige que calcule hacer:\n0 Suma\n1 Resta\n2 Multiplicacion\n3 Division ";
	while (!elija) {
		std::cin >> elige;
		if (elige == 0 || elige == 1 || elige == 2 || elige == 3) {
			elija = true;
		}
	}
	if (decimales) {
		std::cout << "Ponga 2 numeros decimales: ";
		std::cin >> nume1;
		std::cin >> nume2;
	}
	else if (!decimales) {
		std::cout << "Ponga 2 numeros NO decimales: ";
		std::cin >> num1;
		std::cin >> num2;
	}
	if ((elige == 3 && num2 == 0) || (elige == 3 && nume2 == 0)) {
		std::cout << "Ponga cualquier numero menos el 0";
		divide = true;
	}
	while (divide) {
		if (decimales) {
			std::cin >> nume2;
		}
		else if (!decimales) {
			std::cin >> num2;
		}
		if (num2 != 0 || nume2 != 0) {
			divide = false;
		}
	}

	if (elige == 0) {
		suma = CalcularSuma(num1, num2, nume1, nume2, decimales);
		std::cout << "La suma es de: " << suma;
	}
	if (elige == 1) {
		resta = CalcularResta(num1, num2, nume1, nume2, decimales);
		std::cout << "La resta es de: " << resta;
	}
	if (elige == 2) {
		multiplicacion = CalcularMultiplicacion(num1, num2, nume1, nume2, decimales);
		std::cout << "La multiplicacion es de: " << multiplicacion;
	}
	if (elige == 3) {
		division = CalcularDivision(num1, num2, nume1, nume2, decimales);
		std::cout << "La division es de: " << division;
	}
}