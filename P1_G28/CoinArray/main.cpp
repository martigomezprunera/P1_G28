#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include "Map.h"
#include "Player.h"
#include "CoinManager.h"

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));		//SEMILLA DE RANDOM
	int difficult, money;

	//MOSTRAMOS POR PANTALLA LA DIFICULTAD DEL NIVEL Y SALUDOS
	do {
		system("cls");
		std::cout << "////////// COIN RACE //////////\n";
		std::cout << "CONTROLS: Use WASD to move the player\n\n";

		std::cout << "Choose the difficulty:\n";
		std::cout << "1 - EASY\n";
		std::cout << "2 - MEDIUM\n";
		std::cout << "3 - HARDCORE\n";
		std::cin >> difficult;
	} while (difficult < 1 || difficult>3);
	
		//NUMERO DE MONEDAS EN EL MAPA
		money = ((30 * difficult) + (rand() % 30));
		
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

		do
		{
			k = Input::getKey();
			if (k !=Input::Key::NONE)
			{
				player1.update_player(k);
				system("cls");
				map1.print_pantalla();
				std::cout << "MONEY: " << player1.getScore() << "/" << money;
			}

		}while((k != Input::Key::ESC) && (player1.getScore()<money));


}
