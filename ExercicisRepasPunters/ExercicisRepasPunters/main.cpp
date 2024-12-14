#include <iostream>
#include <vector>
#pragma region JuegoPreguntas
//int racha = 0;
//int puntos = 0;
//int rachaNegativa = 0;
//void Puntuacion(short& ans) {
//	short ansPlayer;
//	std::cout << "Escoja una opcion: ";
//	std::cin >> ansPlayer;
//	if (ansPlayer == ans) {
//		racha++;
//		puntos += 1 + racha;
//		rachaNegativa = 0;
//	}
//	else {
//		rachaNegativa++;
//		puntos -= rachaNegativa + 1;
//		racha = 0;
//		std::cout << "La respuesta correcta era la " << ans << std::endl;
//	}
//
//}
//void Last(short &ansPlayer, short &ans) {
//	ans = 3;
//	if (puntos < 20)
//	{
//		std::cout << "La pregunta final para ver si apruebas" << std::endl << std::endl;
//		std::cout << "Cuantas protogemas son 1 deseo en Genshin Impact?" << std::endl;
//		std::cout << "1: 100" << std::endl;
//		std::cout << "2: 150" << std::endl;
//		std::cout << "3: 160" << std::endl;
//		std::cout << "4: 200" << std::endl << std::endl;
//		std::cin >> ansPlayer;
//
//		if (ansPlayer == ans)
//		{
//			std::cout << puntos << " puntos finales" << std::endl;
//			std::cout << "Has aprobado por un milagro, felicidades";
//		}
//		else
//		{
//			std::cout << puntos << " puntos finales" << std::endl;
//			std::cout << "Ni Dios te salva de esto";
//		}
//	}
//	else
//	{
//		std::cout << puntos << " puntos finales" << std::endl << std::endl;
//		std::cout << "Felicidades has aprobado, pensaba que eras mas tonto";
//	}
//}
//
//
//void main() {
//	short ans;
//	short ansPlayer;
//	//Pregunta 1
//	std::cout << "Cual es la masa del sol?" << std::endl;
//	std::cout << "1: 1,98 x 10 ^30 kg" << std::endl;
//	std::cout << "2: 1,898 × 10^27 kg" << std::endl;
//	std::cout << "3: 1,98 × 10^31 kg" << std::endl;
//	std::cout << "4: 1,898 × 10^29 kg" << std::endl << std::endl;
//	ans = 1;
//	Puntuacion(ans);
//
//
//	//Pregunta 2
//	std::cout << "Si Pedro tiene 4 manzanas y Diego le da 6. Cual es el elemento numero 15 de la tabla periodica?" << std::endl;
//	std::cout << "1: 10 manzanas" << std::endl;
//	std::cout << "2: -2 manzanas" << std::endl;
//	std::cout << "3: Fosforo" << std::endl;
//	std::cout << "4: Fluor" << std::endl << std::endl;
//	ans = 3;
//	Puntuacion(ans);
//
//	//Pregunta 3
//	std::cout << "Vas corriendo a 7 km/h y tienes que llegar a un sitio que está a 30 km, si cada 2 km recorridos te tomas un descanso de 10 minutos. Cual es la velocidad de la luz?" << std::endl;
//	std::cout << "1: Que clase de pregunta es esta?" << std::endl;
//	std::cout << "2: 3 × 10^8 m/s" << std::endl;
//	std::cout << "3: 3.5 x 10^8 m/s " << std::endl;
//	std::cout << "4: 2 x 10^9 m/s" << std::endl << std::endl;
//	ans = 2;
//	Puntuacion(ans);
//
//	//Pregunta 4
//	std::cout << "Cuanto es 1 + 1?" << std::endl;
//	std::cout << "1: 2" << std::endl;
//	std::cout << "2: 11" << std::endl;
//	std::cout << "3: 3 " << std::endl;
//	std::cout << "4: 111" << std::endl << std::endl;
//	ans = 1;
//	Puntuacion(ans);
//
//	//Pregunta 5
//	std::cout << "Que queremos la mayoria que desaparezca?" << std::endl;
//	std::cout << "1: Nuestra propia existencia" << std::endl;
//	std::cout << "2: Examenes sorpresa" << std::endl;
//	std::cout << "3: Deberes" << std::endl;
//	std::cout << "4: Francia" << std::endl << std::endl;
//	ans = 4;
//	Puntuacion(ans);
//
//	//Pregunta 6
//	std::cout << "Cual es el pais que utiliza tanto un metodo distinto de medidas como de temperatura por querer ser diferentes?" << std::endl;
//	std::cout << "1: Francia" << std::endl;
//	std::cout << "2: USA" << std::endl;
//	std::cout << "3: Reino Unido" << std::endl;
//	std::cout << "4: Australia" << std::endl << std::endl;
//	ans = 2;
//	Puntuacion(ans);
//
//	//Pregunta 7
//	std::cout << "Cuanto es 2^30?" << std::endl;
//	std::cout << "1: 3.289.985.222" << std::endl;
//	std::cout << "2: 1.230.245.256" << std::endl;
//	std::cout << "3: 4.294.967.296" << std::endl;
//	std::cout << "4: 1.073.741.824" << std::endl << std::endl;
//	ans = 4;
//	Puntuacion(ans);
//
//	//Pregunta 8
//	std::cout << "Con cuantos deseos (maximo) te aseguras un 5 estrellas en el gachapon limitado de Genshin Impact?" << std::endl;
//	std::cout << "1: 100" << std::endl;
//	std::cout << "2: 70" << std::endl;
//	std::cout << "3: 85" << std::endl;
//	std::cout << "4: 90" << std::endl << std::endl;
//	ans = 4;
//	Puntuacion(ans);
//
//	//Pregunta 9
//	std::cout << "Cual es el primer nivel de Geometry Dash?" << std::endl;
//	std::cout << "1: Dry Out" << std::endl;
//	std::cout << "2: Jumper" << std::endl;
//	std::cout << "3: Stereo Madness" << std::endl;
//	std::cout << "4: Deadlocked" << std::endl << std::endl;
//	ans = 3;
//	Puntuacion(ans);
//
//	//Pregunta 10
//	std::cout << "Que es lo que tienes que hacer si quieres dinero?" << std::endl;
//	std::cout << "1: Blanqueo de capitales" << std::endl;
//	std::cout << "2: Trabajar" << std::endl;
//	std::cout << "3: Ser un cryptobro" << std::endl;
//	std::cout << "4: Robar al banco" << std::endl << std::endl;
//	ans = 2;
//	Puntuacion(ans);
//
//	Last(ansPlayer, ans);
//}
//
#pragma endregion
#pragma region JuegoCasillas
//
//void UsarObjeto(int &objetoPlayer1, int &objetoPlayer2, bool &turno, int &casillasJugador1, int &casillasJugador2, bool& objeto1, bool& objeto2) {
//	int cuantoAvanzo1;
//	int cuantoAvanzo2;
//
//	int dadosPlayer1;
//	int dadosPlayer2;
//	
//	if (!turno) {
//		if (objetoPlayer1 == 0) {
//			dadosPlayer1 = rand() % 6 + 1;
//			casillasJugador1 = casillasJugador1 + dadosPlayer1;
//			std::cout << "Has avanzado " << casillasJugador1 << " casillas" << "\n";
//			objeto1 = false;
//		}
//		else if (objetoPlayer1 == 1) {
//			dadosPlayer1 = rand() % 6 + 1;
//			casillasJugador2 = casillasJugador2 - dadosPlayer1;
//			std::cout << "Has hecho retroceder al jugador 2 " << casillasJugador2 << " casillas" << "\n";
//			objetoPlayer1 = false;
//		}
//		else if (objetoPlayer1 == 2) {
//			std::cout << "Jugador 1 cuantas casillas quieres avanzar? (solo puedes 3 max)\n";
//			std::cin >> cuantoAvanzo1;
//			while (cuantoAvanzo1 < 1 || cuantoAvanzo1 > 3) {
//				std::cout << "Jugador 1 del 1 al 3";
//				std::cin >> cuantoAvanzo1;
//			}
//			casillasJugador1 = casillasJugador1 + cuantoAvanzo1;
//			objetoPlayer1 = false;
//		}
//	}
//	else {
//		if (objetoPlayer2 == 0) {
//			dadosPlayer2 = rand() % 6 + 1;
//			casillasJugador2 = casillasJugador2 + dadosPlayer2;
//			std::cout << "Has avanzado " << casillasJugador2 << " casillas" << "\n";
//			objeto2 = false;
//		}
//		else if (objetoPlayer2 == 1) {
//			dadosPlayer2 = rand() % 6 + 1;
//			casillasJugador1 = casillasJugador1 - dadosPlayer2;
//			std::cout << "Has hecho retroceder al jugador 1 " << casillasJugador2 << " casillas" << "\n";
//			objetoPlayer2 = false;
//		}
//		else if (objetoPlayer2 == 2) {
//			std::cout << "Jugador 1 cuantas casillas quieres avanzar? (solo puedes 3 max)\n";
//			std::cin >> cuantoAvanzo2;
//			while (cuantoAvanzo2 < 1 || cuantoAvanzo1 > 2) {
//				std::cout << "Jugador 1 del 1 al 3";
//				std::cin >> cuantoAvanzo2;
//			}
//			casillasJugador2 = casillasJugador2 + cuantoAvanzo2;
//			objetoPlayer2 = false;
//		}
//	}
//}
//void Objeto(bool &objeto1, bool &objeto2, int &objetoPlayer1, int &objetoPlayer2, bool &turno, int &casillasJugador1, int &casillasJugador2) {
//	int input;
//	if (objeto1 || objeto2) {
//		if (objetoPlayer1 == 0 || objetoPlayer2 == 0) {
//			std::cout << "Tienes el dado adicional \n";
//		}
//		else if (objetoPlayer1 == 1 || objetoPlayer2 == 1) {
//			std::cout << "Tienes el dado que hace retroceder al enemigo \n";
//		}
//		else if (objetoPlayer1 == 2 || objetoPlayer2 == 2) {
//			std::cout << "Tienes el avanza 1-3 casillas\n";
//		}
//		std::cout << "Jugador quieres usar el objeto? (0) No (1) Si\n";
//		std::cin >> input;
//	
//		while (input < 0 || input > 1) {
//			std::cout << "Jugador pon 0 o 1, por favor";
//			std::cin >> input;
//		}
//		if (input == 1) {
//			UsarObjeto(objetoPlayer1, objetoPlayer2, turno, casillasJugador1, casillasJugador2, objeto1, objeto2);
//		}
//	}
//}
//void Casillas(int &casillasJugador1, int &casillasJugador2, int &dadosPlayer1, int &dadosPlayer2, bool &objeto1, bool &objeto2, int &objetoPlayer1, int &objetoPlayer2, bool &turno) {
//	srand(time(NULL));
//	int objetoRandomPlayer1 = rand() % 2;
//	int objetoRandomPlayer2 = rand() % 2;
//	if (!turno) {
//		casillasJugador1 = casillasJugador1 + dadosPlayer1;
//		std::cout << "Jugador 1 has llegado hasta la casilla " << casillasJugador1 << "\n\n";
//		switch (casillasJugador1) {
//		case 5: case 10: case 15: case 20: case 25: case 30: case 35:
//			dadosPlayer1 = rand() % 6 + 1;
//			std::cout << "Jugador 1 avanzas " << dadosPlayer1 << " casillas\n";
//			casillasJugador1 = casillasJugador1 + dadosPlayer1;
//			std::cout << "Jugador 1 has llegado hasta la casilla " << casillasJugador1 << "\n\n";
//			break;
//		case 7: case 19:
//			casillasJugador1 = casillasJugador1 + 5;
//			break;
//		case 12: case 24:
//			casillasJugador1 = casillasJugador1 - 5;
//			break;
//		case 31:
//			casillasJugador1 = casillasJugador1 + 9;
//			break;
//		case 40:
//			casillasJugador1 = casillasJugador1 - 9;
//			dadosPlayer1 = rand() % 6 + 1;
//			casillasJugador1 = casillasJugador1 + dadosPlayer1;
//			break;
//		case 3: case 13: case 23: case 33: case 43:
//			if (objeto1 == false) {
//				objetoRandomPlayer1 = rand() % 2;
//				switch (objetoRandomPlayer1) {
//				case 0:
//					std::cout << "Jugador 1 obtuviste dado adicional\n";
//					objetoPlayer1 = 0;
//					objeto1 = true;
//					break;
//				case 1:
//					std::cout << "Jugador 1 obtuviste retrocede al enemigo\n";
//					objetoPlayer1 = 1;
//					objeto1 = true;
//					break;
//				case 2:
//					std::cout << "Jugador 1 obtuviste avanza 1-3 casillas";
//					objetoPlayer1 = 2;
//					objeto1 = true;
//					break;
//				default:
//					break;
//				}
//			}
//		default:
//			break;
//		}
//	}
//	else {
//		casillasJugador2 = casillasJugador2 + dadosPlayer2;
//		std::cout << "Jugador 2 has llegado hasta la casilla " << casillasJugador2 << "\n\n";
//		switch (casillasJugador2) {
//		case 5: case 10: case 15: case 20: case 25: case 30: case 35:
//			dadosPlayer2 = rand() % 6 + 1;
//			std::cout << "Jugador 2 avanzas " << dadosPlayer2 << " casillas\n";
//			casillasJugador2 = casillasJugador2 + dadosPlayer2;
//			std::cout << "Jugador 2 has llegado hasta la casilla " << casillasJugador2 << "\n\n";
//			break;
//		case 7: case 19:
//			casillasJugador2 = casillasJugador2 + 5;
//			break;
//		case 12: case 24:
//			casillasJugador2 = casillasJugador2 - 5;
//			break;
//		case 31:
//			casillasJugador2 = casillasJugador2 + 9;
//			break;
//		case 40:
//			casillasJugador2 = casillasJugador2 - 9;
//			dadosPlayer2 = rand() % 6 + 1;
//			casillasJugador2 = casillasJugador2 + dadosPlayer2;
//			break;
//		case 3: case 13: case 23: case 33: case 43:
//			if (objeto2 == false) {
//				objetoRandomPlayer2 = rand() % 2;
//				switch (objetoRandomPlayer2) {
//				case 0:
//					std::cout << "Jugador 1 obtuviste dado adicional\n";
//					objetoPlayer2 = 0;
//					objeto2 = true;
//					break;
//				case 1:
//					std::cout << "Jugador 1 obtuviste retrocede al enemigo\n";
//					objetoPlayer2 = 1;
//					objeto2 = true;
//					break;
//				case 2:
//					std::cout << "Jugador 1 obtuviste avanza 1-3 casillas";
//					objetoPlayer2 = 2;
//					objeto2 = true;
//					break;
//				default:
//					break;
//				}
//			}
//		default:
//			break;
//		}
//	}
//}
//void main() {
//	int dadosPlayer1;
//	int dadosPlayer2;
//
//	int casillasTotales = 50;
//
//	bool objeto1 = false;
//	bool objeto2 = false;
//
//	bool turno = false;
//
//	int casillasJugador1 = 0;
//	int casillasJugador2 = 0;
//
//	int objetoPlayer1;
//	int objetoPlayer2;
//	srand(time(NULL));
//	while (casillasJugador1 < casillasTotales && casillasJugador2 < casillasTotales) {
//		dadosPlayer1 = rand() % 6 + 1;
//		std::cout << "Jugador 1 avanzas " << dadosPlayer1 << " casillas\n";
//		turno = false;
//		Objeto(objeto1, objeto2, objetoPlayer1, objetoPlayer2, turno, casillasJugador1, casillasJugador2);
//		Casillas(casillasJugador1, casillasJugador2, dadosPlayer1, dadosPlayer2, objeto1, objeto2, objetoPlayer1, objetoPlayer2, turno);
//		dadosPlayer2 = rand() % 6 + 1;
//		std::cout << "Jugador 2 avanzas " << dadosPlayer2 << " casillas\n";
//		turno = true;
//		Objeto(objeto1, objeto2, objetoPlayer1, objetoPlayer2, turno, casillasJugador1, casillasJugador2);
//		Casillas(casillasJugador1, casillasJugador2, dadosPlayer1, dadosPlayer2, objeto1, objeto2, objetoPlayer1, objetoPlayer2, turno);
//		if (casillasJugador1 >= casillasTotales) {
//			std::cout << "Gana el jugador 1";
//		}
//		else if (casillasJugador2 >= casillasTotales) {
//			std::cout << "Gana el jugador 2";
//		}
//	}
//}
#pragma endregion
#pragma region AdivinaNumero
//int respuesta() {
//	int input;
//	std::cin >> input;
//	return input;
//}
//
//void ComprobarNumero(unsigned int &numRandom, int &playerAns, int &intentos, bool &acertado) {
//	int pista;
//
//	if (playerAns < numRandom) {
//		std::cout << "El numero secreto es mayor que " << playerAns << "\n";
//	}
//	else if (playerAns > numRandom) {
//		std::cout << "El numero secreto es menor que " << playerAns << "\n";
//	}
//	else if (playerAns = numRandom) {
//		std::cout << "Acertaste el numero secreto!\n";
//		acertado = true;
//	}
//	if (acertado) {
//		std::cout << "Has acertado en " << intentos << " intentos\n";
//	}
//}
//void main() {
//	srand(time(NULL));
//
//	bool acertado = false;
//	int intentos = 0;
//
//	int playerAns;
//
//	unsigned int numRandom = rand() % 101;
//	std::cout << "Adivina el numero entre el 0 al 100\n";
//	while (!acertado) {
//		playerAns = respuesta();
//		intentos++;
//		ComprobarNumero(numRandom, playerAns, intentos, acertado);
//	}
//}
#pragma endregion
#pragma region Ahorcado
void ElegirPalabra(bool &palabraEscogida, bool &palabra0, bool &palabra1, bool &palabra2, bool &palabra3, std::string &palabra, char palabraAdivina[], int &intentos) {
	int num;
	std::vector<std::string>listaPalabras;
	listaPalabras.push_back("murcielago");
	listaPalabras.push_back("madre");
	listaPalabras.push_back("comida");
	listaPalabras.push_back("huertos");
	srand(time(NULL));
	while (!palabraEscogida) {		
		num = rand() % 4;
		switch (num) {
		case 0:						
			if (!palabra0) {
				palabra = listaPalabras[0];
				palabra0 = true;
				palabraEscogida = true;
			}
			break;
		case 1:
			if (!palabra1) {
				palabra = listaPalabras[1];
				palabra1 = true;
				palabraEscogida = true;
			}
			break;
		case 2:
			if (!palabra2) {
				palabra = listaPalabras[2];
				palabra2 = true;
				palabraEscogida = true;
			}
			break;
		case 3:
			if (!palabra3) {
				palabra = listaPalabras[3];
				palabra3 = true;
				palabraEscogida = true;
			}
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < palabra.length(); i++) {
		palabraAdivina[i] = '_';
	}
	intentos = palabra.size();
	std::cout << palabra << "\n";
}


void Letras(std::string &palabra, char palabraAdivina[], int &intentos, short &letter, bool &pista, bool &acierto, short &letrasAcertadas) {
	bool noEsta = false;
	char letra;
	char letrasPuestas[25];
	char letraAyuda;
	int donde;
	bool esLetra = false;;
	
	for (int i = 0; i < palabra.length(); i++) {
		std::cout << palabraAdivina[i] << " ";
	}
	std::cout << "\nTienes: " << intentos << " intentos\n";
	//Empezamos con comprobacion letras

	while (!noEsta) {

		while (!esLetra) {
			std::cout << "Pon una letra y que no la hayas utilizado\n";
			std::cin >> letra;
			(int)letra;
			if ((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)) {
				esLetra = true;
			}
		}
		if (letra >= 65 && letra <= 90) {
			letra += 32;
		}
		noEsta = true;
		if (letra >= 97 && letra <= 122) {
			for (int b = 0; b < 24; b++) {
				if (letra == letrasPuestas[b]) {
					noEsta = false;
				}
			}
		}
	}
	if (noEsta) {
		letrasPuestas[letter] = (char)letra;
		letter++;
	}
	noEsta = false;
	intentos--;
	//Y aqui acaba el caos de mi resolución de ese problema


	bool letraEncontrada = false;

	for (int c = 0; c < palabra.length(); c++) {
		if (palabra[c] == letra) {
			letraEncontrada = true;
			palabraAdivina[c] = (char)letra;
		}
	}
	if (letraEncontrada) {
		letrasAcertadas++;
		intentos++;
		letraEncontrada = false;
	}
	if (letrasAcertadas == palabra.length()) {
		std::cout << letrasAcertadas << "\n";
		acierto = true;
	}
	else {
	}

	if (intentos == 2 && !pista) {
		for (int e = 0; e < palabra.length(); e++) {
			if (letrasPuestas[e] != palabra[e]) {
				letraAyuda = palabra[e];
				donde = e;
				break;
			}
		}
		letrasPuestas[letter] = letraAyuda;
		letter++;
		palabraAdivina[donde] = letraAyuda;
		letrasAcertadas++;
		std::cout << "\n";
		pista = true;
	}
	if (acierto) {
		for (int a = 0; a < 10; a++) {
			palabraAdivina[a] = ' ';
		}
		for (int a = 0; a < 24; a++) {
			letrasPuestas[a] = ' ';
		}
	}
}

void GanarOPerderRondas(bool &acierto, short &rondasGanadas, short &rondasPerdidas, char palabraAdivina[10]) {
	if (acierto) {
		rondasGanadas++;
		std::cout << "\nHas ganado una ronda\n";
	}
	else {
		rondasPerdidas++;
		std::cout << "\nHas perdido una ronda\n";
	}
	acierto = false;
}
void WinOrLose(short &rondasGanadas, short &rondasPerdidas) {
	if (rondasGanadas == 2 && rondasPerdidas == 0) {
		std::cout << "\nFelicidades has ganado las 2 primeras rondas\n10/10";
	}
	else if (rondasGanadas == 2 && rondasPerdidas == 1) {
		std::cout << "\nHas ganado 2 rondas pero perdido \n6/10";
	}
	else if (rondasGanadas == 0 && rondasPerdidas == 2) {
		std::cout << "\nHas perdido las 2 seguidas";
	}
	else if (rondasGanadas == 1 && rondasPerdidas == 2) {
		std::cout << "\nHas ganado 1 pero perdido 2";
	}
}
void main() {
	short rondasGanadas = 0;
	short rondasPerdidas = 0;

	bool palabraEscogida = false;
	short letrasAcertadas = 0;

	std::string palabra;
	bool palabra0 = false;
	bool palabra1 = false;
	bool palabra2 = false;
	bool palabra3 = false;

	bool pista = false;
	char palabraAdivina[10] = {};
	int intentos;
	short letter = 0;
	bool acierto = false;

	while (rondasGanadas < 2 && rondasPerdidas < 2) {
		palabraEscogida = false;
		letrasAcertadas = 0;
		pista = false;
		palabra0, palabra1, palabra2, palabra3 = false;
		acierto = false;
		ElegirPalabra(palabraEscogida, palabra0, palabra1, palabra2, palabra3, palabra, palabraAdivina, intentos);
		while (intentos != 0 && letrasAcertadas != palabra.length()) {
			Letras(palabra, palabraAdivina, intentos, letter, pista, acierto, letrasAcertadas);
		}
		GanarOPerderRondas(acierto, rondasGanadas, rondasPerdidas, palabraAdivina);
	}
	WinOrLose(rondasGanadas, rondasPerdidas);
}
#pragma endregion
