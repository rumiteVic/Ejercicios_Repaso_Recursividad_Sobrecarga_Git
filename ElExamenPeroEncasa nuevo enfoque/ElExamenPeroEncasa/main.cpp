#include <iostream>
#include <vector>
#include <Windows.h>

void turnos(bool &sePuede, int &input, bool &turno, int &eleccion) {
	int n = 0;
	if (eleccion == 0) {
		n = 3;
	}
	else if (eleccion == 1) {
		n = 4;
	}
	else if (eleccion == 2) {
		n = 5;
	}
	if (!turno) {
		std::cout << "Turno del jugador X\n";
		std::cout << "Ponga un numero del 1 al 3\n";
		while (!sePuede) {
			std::cin >> input;
			input = input - 1;
			if (input >= 0 && input <= n) {
				sePuede = true;
			}
		}
		sePuede = false;
	}
	else if (turno) {
		std::cout << "Turno del jugador O\n";
		std::cout << "Ponga un numero del 1 al 3\n";
		while (!sePuede) {
			std::cin >> input;
			input = input - 1;
			if (input >= 0 && input <= n) {
				sePuede = true;
			}
		}
		sePuede = false;
	}
	
}
void tableroo(bool& turno,bool &sePuede, int &input, int &eleccion, bool &primera, std::vector<short> &jugadorX, std::vector<short>& jugadorY) {
	const int n = 5;
	char tablero[n][n];
	char especial = '~';
	int variable = 0;
	char x = 'X';
	char o = 'O';
	int filas = 0;
	if (eleccion == 0) {
		variable = 3;
	}
	else if (eleccion == 1) {
		variable = 4;
	}
	else if (eleccion == 2) {
		variable = 5;
	}
	//Tablero vacio
	for (int a = 0; a < variable; a++) {
		for (int b = 0; b < variable; b++) {
			tablero[a][b] = ' ';
		}
	}
	for (int a = 0; a < variable; a++) {
		for (int b = 0; b < variable; b++) {
			tablero[a][b] = especial;
		}
	}
	//Poner las x y las o
	for (int i = 0; i < jugadorX.size(); i++) {

		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = x;
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = o;
		}
	}

	if (input == 0) {
		for (int a = 0; a < variable; a++) {
			if (tablero[0][0] == o || tablero[0][0] == x) {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno, eleccion);
			}
			else if (tablero[a][0] == x || tablero[a][0] == o) {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[0][a] == especial) {
				filas = variable -1;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(0);
	}
	if (input == 1) {
		for (int a = 0; a < variable; a++) {
			if (tablero[0][1] == o || tablero[0][1] == x) {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno, eleccion);
			}
			else if (tablero[a][1] == x || tablero[a][1] == o) {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][1] == especial) {
				filas = variable - 1;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(1);
	}
	if (input == 2) {
		for (int a = 0; a < variable; a++) {
			if (tablero[0][2] == o || tablero[0][2] == x) {
				std::cout << "Prueba otra columna\n";
				return turnos(sePuede, input, turno, eleccion);
			}
			else if (tablero[a][2] == x || tablero[a][2] == o) {
				filas = a - 1;
				break;
			}
			else if (a == 2 && tablero[a][2] == especial) {
				filas = variable - 1;
			}
		}
		jugadorX.push_back(filas);
		jugadorY.push_back(2);
	}
	if (eleccion == 1 || eleccion == 2) {
		if (input == 3) {
			for (int a = 0; a < variable; a++) {
				if (tablero[0][3] == o || tablero[0][3] == x) {
					std::cout << "Prueba otra columna\n";
					return turnos(sePuede, input, turno, eleccion);
				}
				else if (tablero[a][3] == x || tablero[a][3] == o) {
					filas = a - 1;
					break;
				}
				else if (a == 3 && tablero[a][3] == especial) {
					filas = variable -1;
				}
			}
			jugadorX.push_back(filas);
			jugadorY.push_back(3);
		}
	}
	if (eleccion == 2) {
		if (input == 4) {
			for (int a = 0; a < variable; a++) {
				if (tablero[0][4] == o || tablero[0][4] == x) {
					std::cout << "Prueba otra columna\n";
					return turnos(sePuede, input, turno, eleccion);
				}
				else if (tablero[a][4] == x || tablero[a][4] == x) {
					filas = a - 1;
					break;
				}
				else if (a == 4 && tablero[a][4] == especial) {
					filas = variable - 1;
				}
			}
			jugadorX.push_back(filas);
			jugadorY.push_back(4);
		}
	}

	for (int i = 0; i < jugadorX.size(); i++) {
		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = x;
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = o;
		}
	}

	for (int a = 0; a < variable; a++) {
		for (int b = 0; b < variable; b++) {
			std::cout << tablero[a][b] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
void comprobacion(bool& ganar, int& winXTotales, int& winOTotales, std::vector<short> &jugadorX, std::vector<short> &jugadorY, int &eleccion) {
	const int n = 5;
	char tablero[n][n];
	char especial = '~';
	int variable = 0;
	int variable1 = 0;
	int num = 0;
	char x = 'X';
	char o = 'O';
	bool fin = false;
	int winX = 0;
	int winO = 0;
	int empate = 0;
	if (eleccion == 0) {
		variable = 3;
		variable1 = variable - 1;
	}
	else if (eleccion == 1) {
		variable = 4;
		variable1 = variable - 1;
	}
	else if (eleccion == 2) {
		variable = 5;
		variable1 = variable - 1;
	}
	//Tablero vacio
	for (int a = 0; a < variable; a++) {
		for (int b = 0; b < variable; b++) {
			tablero[a][b] = ' ';
		}
	}
	for (int a = 0; a < variable; a++) {
		for (int b = 0; b < variable; b++) {
			tablero[a][b] = especial;
		}
	}
	//Poner las x y las o
	for (int i = 0; i < jugadorX.size(); i++) {

		if (i % 2 == 0) {
			tablero[jugadorX[i]][jugadorY[i]] = x;
		}
		else if (i % 2 == 1) {
			tablero[jugadorX[i]][jugadorY[i]] = o;
		}
	}
	while (!fin) {
		if (!ganar) {
			for (int a = 0; a < variable1; a++) {
				if (tablero[num][a] == x) {
					winX++;
				}				
			}
			if (winX == variable) {
				std::cout << "Ganan las X\n";
				fin = true;
				ganar = true;
				winXTotales++;
			}
		}
		winX = 0;
		if (!ganar) {
			for (int a = 0; a < variable1; a++) {
				if (tablero[a][num] == x) {
					winX++;
				}
			}
			if (winX == variable) {
				std::cout << "Ganan las X\n";
				fin = true;
				ganar = true;
				winXTotales++;
			}
		}
		if (num == variable) {
			fin = true;
		}
		num++;
	}
	num = 0;

	//Comprobar Os
	while (!fin) {
		if (!fin) {
			for (int a = 0; a < variable1; a++) {
				if (tablero[num][a] == o) {
					winO++;
				}
			}
			if (winO == variable) {
				std::cout << "Ganan las O\n";
				fin = true;
				ganar = true;
				winOTotales++;
			}
		}
		winO = 0;
		if (!fin) {
			for (int a = 0; a < variable1; a++) {
				if (tablero[a][num] == o) {
					winO++;
				}
			}
			if (winO == variable) {
				std::cout << "Ganan las O\n";
				fin = true;
				ganar = true;
				winOTotales++;
			}
		}
		if (num == variable) {
			fin = true;
		}
		num++;
	}

	if (!ganar) {
		for (int a = 0; a < variable; a++) {
			for (int b = 0; b < variable; b++) {
				if (tablero[a][b] == x || tablero[a][b] == o) {
					empate++;
				}
			}
		}
	}

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
	bool primera = true;
	bool repetir = true;

	elegir(eleccion, elegido);
	while (repetir) {
		while (!ganar) {
			turno = false;
			turnos(sePuede, input, turno, eleccion);
			tableroo(turno, sePuede, input, eleccion, primera, jugadorX, jugadorY);
			comprobacion(ganar, winXTotales, winYTotales, jugadorX, jugadorY, eleccion);
			turno = true;
			turnos(sePuede, input, turno, eleccion);
			tableroo(turno, sePuede, input, eleccion, primera, jugadorX, jugadorY);
			comprobacion(ganar, winXTotales, winYTotales, jugadorX, jugadorY, eleccion);
		}

		while (ganar) {
			while (!jugadorX.empty()) {
				jugadorX.erase(jugadorX.begin());
			}
			while (!jugadorY.empty()) {
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
				repetir = false;
				std::cout << "Jugador X ha ganado: " << winXTotales << "\n";
				std::cout << "Jugador Y ha ganado: " << winYTotales << "\n";
			}
		}
	}
}