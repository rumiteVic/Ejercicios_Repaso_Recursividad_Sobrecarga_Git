#include <iostream>
#include <vector>

void what(char &input, bool &nomas, int &n, std::vector<char> &lista) {
	if (!nomas) {
		lista.push_back(input);
		n = lista.size();
	}
	else {
		for (n > 0; n--;) {
			if (n != 0) {
				std::cout << lista[n] << "\n";
			}
		}
	}
}

void main() {
	bool nomas = false;
	char input;
	int n = 0;
	std::vector<char> lista;
	std::cout << "Ponga cualquier cosa, ponga 0 si se ha cansado de poner caracteres:\n";
	while (!nomas) {
		std::cin >> input;
		if (input == '0') {
			nomas = true;
		}
		what(input, nomas, n, lista);
	}
}