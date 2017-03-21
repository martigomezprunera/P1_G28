#pragma once
#include <cstdlib>
#include <ostream>
#include <conio.h>

class Player
{
public:
	//CONSTRUCTORES Y DESTRUCTORES
	Player(Map &mymap);
	~Player();

	//METODOS
	void ini_player();
	//void update_player();

private:
	//CONSTANTES

	//ATRIBUTOS
	Map &mymap;
	int x;
	int y;
};
