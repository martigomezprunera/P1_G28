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
	void update_player(Input::Key key);

private:
	//CONSTANTES

	//ATRIBUTOS PRIVADOS
	Map &map;
	CoinManager &coin;
};
