#include <iostream>
#include <vector>

bool si(int &input, std::vector<int> vector, int sizeVector) {
	if (sizeVector != 0) {
		if (vector[sizeVector] == vector[0]) {
			if (sizeVector == 0 && vector[sizeVector] == vector[0]) {
				return true;
			}
			sizeVector--;
			si(input, vector, sizeVector);
		}
		else {
			return false;
		}
	}

}

void main() {
	std::vector<int> vector;
	int input;
	int sizeVector;

	bool ya = false;
	std::cout << "Ponga 0 para dejar de poner caracteres\nY ponga el mismo caracter todo el rato ";
	while (!ya) {
		std::cin >> input;
		if (input == 0) {
			ya = true;
			sizeVector = vector.size() -1;			
		}
		vector.push_back(input);
	}
	if (si(input, vector, sizeVector)) {
		std::cout << "Todo tiene el mismo valor\n";
	}
	else {
		std::cout << "No tiene el mismo valor\n";
	}
}