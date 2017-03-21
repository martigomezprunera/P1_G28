#pragma once
#include <cstdlib>
#include <ostream>
#include <conio.h>
#include "Input.hh"
#include "Map.hh"
#include "CoinManager.hh"

class Player
{
public:

	//ATRIBUTOS PUBLICOS


	//CONSTRUCTORES Y DESTRUCTORES
	Player(Map &mymap, CoinManager &mycoin);
	~Player();

	//METODOS
	void update_player(Input::Key key);			//CAMBIAR LA POSICION DEL JUGADOR SEGUN LA TECLA
	int getX();									//X DONDE ESTA EL JUGADOR
	int getY();									//Y DONDE ESTA EL JUGADOR
	int setX(int new_x);						//RESTABLECEMOS LA POSICION X DEL JUGADOR
	int setY(int new_y);						//RESTABLECEMOS LA POSICION Y DEL JUGADOR

private:
	//CONSTANTES

	//ATRIBUTOS PRIVADOS
	Map &map;
	CoinManager &coin;
	int x, y;
};
