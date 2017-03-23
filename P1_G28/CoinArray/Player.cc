#include "Player.hh"
#include "Map.hh"
#include "CoinManager.hh"

Player::Player(Map &mymap, CoinManager &mycoin) :map(mymap), coin(mycoin)
{
	//POSICIONAMOS EL JUGADOR EN EL MAPA
	x = rand() % (map.getNumRows + 1);
	y = rand () % (map.getNumColumns + 1);

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
		if (y > 0)
		{
			y = y + 1;
			setY(y);
		}
		break;
	case Input::Key::A:
		if (previous_x > 0)
		{
			x = x - 1;
			setX(x);
		}
		break;
	case Input::Key::S:
		if (y > map.getNumColumns - 1)
		{
			y = y - 1;
			setY(y);
		}
		break;
	case Input::Key::D:
		if (x < map.getNumRows - 1)
		{
			x = x + 1;
			setX(x);
		}
		break;
	default:
		break;
	}

	//UPDATEAMOS LA SCORE
	/*if (mapa.getCell(x, y) == '$')
	{
		score++;
		coin.updateCoins();
	}*/
	
	//UPDATEAMOS LA POSICION DEL JUGADOR
	map.change(previous_x, previous_y, '@');
	map.change(x, y, '@');
}

int Player::getX()
{
	return x;
}

int Player::getY()
{
	return y;
}

int Player::setX(int new_x)
{
	x = new_x;
}

int Player::setY(int new_y)
{
	y = new_y;
}

