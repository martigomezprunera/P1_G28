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
	srand((time(nullptr)));		//SEMILLA DE RANDOM
	int difficult;

	//MOSTRAMOS POR PANTALLA LA DIFICULTAD DEL NIVEL Y SALUDOS
	std::cout << "////////// COIN RACE //////////\n";
	std::cout << "CONTROLS: Use WASD to move the player\n\n";

	std::cout << "Choose the difficulty:\n";
	std::cout << "1 - EASY\n";
	std::cout << "2 - MEDIUM\n";
	std::cout << "3 - HARDCORE\n";

		std::cin >> difficult;
		Map map1(difficult);
		map1.print_pantalla();
		//map1.~Map;
		system("pause");

}
