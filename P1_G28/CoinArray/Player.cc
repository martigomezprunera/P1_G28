#include "Player.hh"
#include "Map.hh"
#include "CoinManager.hh"

Player::Player(Map &mymap, CoinManager &mycoin) :map(mymap), coin(mycoin)
{

}

Player::~Player()
{
}

void Player::update_player(Input::Key key)
{
	
}

