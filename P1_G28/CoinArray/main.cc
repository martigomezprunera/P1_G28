#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include "Map.hh"
#include "Player.hh"
#include "CoinManager.hh"

int main()
{
	int difficult;
	srand(static_cast<unsigned> (time(nullptr)));		//SEMILLA DE RANDOM

	//MOSTRAMOS POR PANTALLA LA DIFICULTAD DEL NIVEL Y SALUDOS
	std::cout << "////////// COIN RACE //////////\n";
	std::cout << "CONTROLS: Use WASD to move the player\n\n";

	std::cout << "Choose the difficulty:\n";
	std::cout << "1 - EASY\n";
	std::cout << "2 - MEDIUM\n";
	std::cout << "3 - HARDCORE\n";

	do {

		std::cin >> difficult;
		

	} while (difficult>3 || difficult<1);


}
