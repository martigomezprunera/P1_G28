#include <cstdlib>
#include "CoinManager.hh"
#include "Map.hh"

CoinManager::CoinManager(Map &mymap) : mapa(mymap)
{
	c_monedas = static_cast<int>((3 / 100) * (mapa.numColumns * mapa.numRows) + rand() % (((13 / 100) * mapa.numColumns * mapa.numRows) - ((3 / 100) * mapa.numColumns * mapa.numRows) + 1));		//RANDOM DE CANTIDAD DE MONEDAS
	int x;
	int y;
}

CoinManager::~CoinManager()
{
}
