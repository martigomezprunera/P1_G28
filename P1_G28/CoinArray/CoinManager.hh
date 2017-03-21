#pragma once
#include <cstdlib>
#include <ostream>
#include "Map.hh"

class CoinManager
{
public:
	CoinManager(Map &mymap);
	~CoinManager();

private:
	Map &mapa;
	int c_monedas;
};
