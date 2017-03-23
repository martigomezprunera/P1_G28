#include "Player.h"
#include "CoinManager.h"
#include "Player.h"
#include "Input.h"
#include <iostream>

Player::Player(Map &mymap, CoinManager &mycoin) :map(mymap), coin(mycoin)
{
	//POSICIONAMOS EL JUGADOR EN EL MAPA
	score = 0;
	x = rand() % map.numRows;
	y = rand() % map.numColumns;

	map.change(x, y, '@');
}

Player::~Player()
{

}

void Player::update_player(Input::Key key)
{
	int previous_x = getX();
	int previous_y = getY();

	switch (key)
	{
	case Input::Key::W:
			x = x - 1;
		break;
	case Input::Key::A:
			y = y - 1;
		break;
	case Input::Key::S:
			x = x + 1;
		break;
	case Input::Key::D:
			y = y + 1;
		break;
	default:
		break;
	}

	//UPDATEAMOS LA SCORE
	if (map.celda(x, y) == '$')
	{
		score++;
		coin.change_money();
	}
	
	//UPDATEAMOS LA POSICION DEL JUGADOR
	map.change(previous_x, previous_y, '.');
	map.change(x, y, '@');
}

/*int Player::getX()
{
	return x;
}

int Player::getY()
{
	return y;
}*/

int Player::getScore()
{
	return score;
}

