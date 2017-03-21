#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>

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


	//RECOGEMOS EL VALOR DE TECLADO
	enum class Key // represents each key that the player can use
	{
		NONE, W, A, S, D, ENTER, ESC
	};

	static Key getKey() // returns the key that has been pressed
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 87: case 119:
				return Key::W; // w and W
			case 65: case 97:
				return Key::A; // a and A
			case 83: case 115:
				return Key::S; // s and S
			case 68: case 100:
				return Key::D; // d and D
			case 13:
				return Key::ENTER; // carriage return
			case 27:
				return Key::ESC; // escape
				}
			}
			return Key::NONE;
		}
	};

}
