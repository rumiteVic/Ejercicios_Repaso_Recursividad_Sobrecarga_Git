#include <iostream>

unsigned int Cadena(std::string cadenaNum, int &cantidad, unsigned int &num) {

	if (cantidad >= 0) {
		num += cadenaNum[cantidad] - '0';
		cantidad--;
		Cadena(cadenaNum, cantidad, num);
	}
	return num;

}

void main() {
	std::string cadenaNum;
	int cantidad = 0;
	unsigned int num = 0;
	unsigned suma = 0;
	std::cout << "Ponga un numero: ";
	std::cin >> cadenaNum;
	cantidad = cadenaNum.size() - 1;
	Cadena(cadenaNum, cantidad, num);
	std::cout <<"Toma la suma de esos numeros es " << num;
}