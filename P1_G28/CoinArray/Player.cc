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
		previous_y = previous_y + 1;
		setY(previous_y);
		break;
	case Input::Key::A:
		previous_x = previous_x - 1;
		setX(previous_x);
		break;
	case Input::Key::S:
		previous_y = previous_y - 1;
		setY(previous_y);
		break;
	case Input::Key::D:
		previous_x = previous_x + 1;
		setX(previous_x);
		break;
	default:
		break;
	}

	//UPDATEAMOS LA POSICION DEL JUGADOR
	map.change(previous_x, previous_y, '@');

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

