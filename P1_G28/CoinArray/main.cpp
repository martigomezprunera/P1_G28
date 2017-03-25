#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>

#include "Map.h"
#include "Player.h"
#include "CoinManager.h"

//COLOR CONSTANTES


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));		//SEMILLA DE RANDOM
	int difficult, money, tam_bits;

	//MOSTRAMOS POR PANTALLA LA DIFICULTAD DEL NIVEL Y SALUDOS
	do {
		system("cls");

		system("COLOR 06");
		std::cout << "////////// COIN RACE //////////\n";
		std::cout << "CONTROLS: Use WASD to move the player\n\n";

		std::cout << "Choose the difficulty:\n";
		std::cout << "1 - EASY\n";
		std::cout << "2 - MEDIUM\n";
		std::cout << "3 - HARDCORE\n";
		std::cout << "Difficult: ";
		std::cin >> difficult;

	} while ((difficult < 1 || difficult>3));

	//NUMERO DE MONEDAS EN EL MAPA
	money = ((30 * difficult) + (rand() % 30));
	//money = ((1 * difficult) + (rand() % 1));

	//CREAMOS OBJETO MAPA
	Map map1(difficult);
	//CREAMOS OBJETO COINMANAGER
	CoinManager coin1(map1);
	//CREAMOS OBJETO PLAYER
	Player player1(map1, coin1);

	//PRINTAMOS MAPA POR PANTALLA
	map1.print_pantalla();
	std::cout << "MONEY: " << player1.getScore() << "/" << money;

	Input::Key k;
	clock_t comienzo;
	comienzo = clock();

	do
	{
		//CALCULAMOS TIEMPO DE INICIO

		k = Input::getKey();
		if (k != Input::Key::NONE)
		{
			player1.update_player(k);
			system("cls");
			map1.print_pantalla();
			std::cout << "MONEY: " << player1.getScore() << "/" << money;
		}

	} while ((k != Input::Key::ESC) && (player1.getScore() < money));

	//map1.~Map();
	system("cls");
	std::cout << "ERES UN CRACK!!\n";
	long int tiempo_restante = clock() - comienzo;

	std::cout << "Has tardado: " << tiempo_restante/CLOCKS_PER_SEC << " segundos" << std::endl;
	system("pause");

	return 0;
}
