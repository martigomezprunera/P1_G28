#pragma once
#include <cstdlib>
#include <ostream>
#include "Map.h"

class CoinManager
{
public:
	CoinManager(Map &mymap);
	~CoinManager();
	void change_money();								//MODIFICAMOS LOS COINS
	void new_money();									//CREAMOS COINS
	int getMoney();

private:
	Map &mapa;
	int c_monedas;
};

