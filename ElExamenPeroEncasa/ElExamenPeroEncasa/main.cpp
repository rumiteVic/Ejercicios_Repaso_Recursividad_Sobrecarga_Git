#include <iostream>
#include <vector>
#include <Windows.h>

void turnos(bool &sePuede, int &input, bool &turno) {
	
	if (!turno) {
		std::cout << "Turno del jugador X\n";
		std::cout << "Ponga un numero del 1 al 3\n";
		while (!sePuede) {
			std::cin >> input;
			input = input - 1;
			if (input >= 0 && input <= 3) {
				sePuede = true;
			}
		}
		sePuede = false;
	}
	else {
		std::cout << "Turno del jugador O\n";
		std::cout << "Ponga un numero del 1 al 3\n";
		while (!sePuede) {
			std::cin >> input;
			input = input - 1;
			if (input >= 0 && input <= 3) {
				sePuede = true;
			}
		}
		sePuede = false;
	}
	
}
void tableroo(bool& turno,bool &sePuede, int &input, std::vector<short> &jugadorX, std::vector<short> &jugadorY) {
	const int casillas = 3;
	char tablero[casillas][casillas];
	int filas = 0;


	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			tablero[a][b] = ' ';
		}
	}
	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			tablero[a][b] = '~';
		}
	}
	for (int i = 0; i < jugadorX.size(); i++) {

		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = 'X';
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = 'O';
		}
	}
	for (int i = 0; i < jugadorX.size(); i++) {
		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = 'X';
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = 'O';
		}
	}

	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			std::cout << tablero[a][b] << " ";
		}
		std::cout << "\n";
	}
	turnos(sePuede, input, turno);
	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			std::cout << tablero[a][b] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//Las X
	if (input == 0) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][0] == 'O' || tablero[0][0] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[0][a] == 'X' || tablero[0][a] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[0][a] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(0);
	}
	if (input == 1) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][1] == 'O' || tablero[0][1] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[a][1] == 'X' || tablero[a][1] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][0] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(1);
	}
	if (input == 2) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][2] == 'O' || tablero[0][2] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[a][2] == 'X' || tablero[a][2] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][2] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(2);
	}
	for (int i = 0; i < jugadorX.size(); i++) {
		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = 'X';
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = 'O';
		}
	}

	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			std::cout << tablero[a][b] << " ";
		}
		std::cout << "\n";
	}
	turno = true;
	//Las O
	turnos(sePuede, input, turno);
	if (input == 0) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][0] == 'O' || tablero[0][0] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[a][0] == 'X' || tablero[a][0] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][0] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(0);
	}
	if (input == 1) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][1] == 'O' || tablero[0][1] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[a][1] == 'X' || tablero[a][1] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][0] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(1);
	}
	if (input == 2) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][2] == 'O' || tablero[0][2] == 'X') {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno);
			}
			else if (tablero[a][2] == 'X' || tablero[a][2] == 'O') {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][2] == '~') {
				filas = 2;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(2);
	}
	for (int i = 0; i < jugadorX.size(); i++) {
		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = 'X';
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = 'O';
		}
	}

	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			std::cout << tablero[a][b] << " ";
		}
		std::cout << "\n";
	}

}
void comprobacion(std::vector<short> &jugadorX, std::vector<short> &jugadorY, bool &ganar, int &winXTotales, int &winOTotales) {
	const int casillas = 3;
	char tablero[casillas][casillas];
	int winX = 0;
	int winO = 0;
	int empate = 0;
	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			tablero[a][b] = ' ';
		}
	}
	for (int a = 0; a < casillas; a++) {
		for (int b = 0; b < casillas; b++) {
			tablero[a][b] = '~';
		}
	}

	for (int i = 0; i < jugadorX.size(); i++) {

		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = 'X';
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = 'O';
		}
	}
	//Comprobar horizontal
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][a] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[1][a] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[2][a] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;

	//Comprobar vertical
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][1] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][1] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][2] == 'X') {
				winX++;
			}
		}
		if (winX == 3) {
			std::cout << "Ganan las X";
			ganar = true;
			winXTotales++;
		}
	}
	winX = 0;
	//Comprobar diagonal
	if (!ganar) {
		if (tablero[0][0] == 'X') {
			winX++;
		}
		if (tablero[1][1] == 'X') {
			winX++;
		}
		if (tablero[2][2] == 'X') {
			winX++;
		}
		if (winX == 3) {
			ganar = true;
			winXTotales++;
			std::cout << "Ganan las X";
		}
	}
	winX = 0;
	if (!ganar) {
		if (tablero[0][2] == 'X') {
			winX++;
		}
		if (tablero[1][1] == 'X') {
			winX++;
		}
		if (tablero[2][0] == 'X') {
			winX++;
		}
		if (winX == 3) {
			ganar = true;
			winXTotales++;
			std::cout << "Ganan las X";
		}
	}
	winX = 0;

	//Comprobar las Os
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[0][a] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[1][a] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[2][a] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;

	//Comprobar vertical
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][1] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][1] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;
	if (!ganar) {
		for (int a = 0; a < casillas; a++) {
			if (tablero[a][2] == 'O') {
				winO++;
			}
		}
		if (winO == 3) {
			std::cout << "Ganan las O";
			winOTotales++;
			ganar = true;
		}
	}
	winO = 0;
	//Diagonal O
	if (!ganar) {
		if (tablero[0][0] == 'O') {
			winO++;
		}
		if (tablero[1][1] == 'O') {
			winO++;
		}
		if (tablero[2][2] == 'O') {
			winO++;
		}
		if (winO == 3) {
			ganar = true;
			std::cout << "Ganan las O";
		}
	}
	winO = 0;
	if (!ganar) {
		if (tablero[0][2] == 'O') {
			winO++;
		}
		if (tablero[1][1] == 'O') {
			winO++;
		}
		if (tablero[2][0] == 'O') {
			winO++;
		}
		if (winO == 3) {
			ganar = true;
			winOTotales++;
			std::cout << "Ganan las O";
		}
	}
	winO = 0;


	if (empate == 9) {
		std::cout << "Empate";
		ganar = true;
	}
	empate = 0;

}


void elegir(int &eleccion, bool &elegido) {
	std::cout << "Elige una dificultad\n0 facil\n1 intermedio\n2 dificil\n";
	while (!elegido) {
		std::cin >> eleccion;
		if (eleccion == 0) {
			elegido = true;
		}
		else if (eleccion == 1) {
			elegido = true;
		}
		else if (eleccion == 2) {
			elegido = true;
		}
	}
	
}

void main() {
	std::vector<short>jugadorX;
	std::vector<short>jugadorY;
	bool turno = false;
	bool ganar = false;
	bool sePuede = false;
	int input;
	int winXTotales = 0;
	int winYTotales = 0;

	int eleccion = -1;
	bool elegido = false;

	elegir(eleccion, elegido);

	if (eleccion == 0) {
		while (!ganar) {
			turno = false;
			tableroo(turno, sePuede, input, jugadorX, jugadorY);
			comprobacion(jugadorX, jugadorY, ganar, winXTotales, winYTotales);
		}
	}
	
	while (ganar) {
		if (!jugadorX.empty()) {
			jugadorX.erase(jugadorX.begin());
		}
		if (!jugadorY.empty()) {
			jugadorY.erase(jugadorY.begin());
		}
		std::cout << "Quieres repetir partida?\n0 No\1 Si";
		std::cin >> eleccion;
		elegido = false;
		if (eleccion == 1) {
			ganar = false;
			return elegir(eleccion, elegido);
		}
		else if (eleccion == 0) {
			ganar = false;
			std::cout << "Jugador X ha ganado: " << winXTotales << "\n";
			std::cout << "Jugador Y ha ganado: " << winYTotales << "\n";
		}
	}
}