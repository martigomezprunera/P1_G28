#pragma once
#include <cstdlib>
#include <ostream>
#include <conio.h>
#include "Input.h"
#include "Map.h"
#include "CoinManager.h"

class Player
{
public:

	//ATRIBUTOS PUBLICOS
	Map &map;
	CoinManager &coin;
	int x, y, score;


	//CONSTRUCTORES Y DESTRUCTORES
	Player(Map &mymap, CoinManager &mycoin);
	~Player();

	//METODOS
	void update_player(Input::Key key);			//CAMBIAR LA POSICION DEL JUGADOR SEGUN LA TECLA
	//int getX();								//X DONDE ESTA EL JUGADOR
	//int getY();								//Y DONDE ESTA EL JUGADOR
	int getScore();								//DEVOLVEMOS EL SCORE DEL JUGADOR

private:
	//CONSTANTES

	//ATRIBUTOS PRIVADOS
};
