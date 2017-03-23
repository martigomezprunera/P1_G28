#include <cstdlib>
#include "CoinManager.hh"
#include "Map.hh"

CoinManager::CoinManager(Map &mymap) : mapa(mymap)
{
	c_monedas = static_cast<int>((3 / 100) * (mapa.getNumColumns * mapa.getNumRows) + rand() % (((13 / 100) * mapa.getNumColumns * mapa.getNumRows) - ((3 / 100) * mapa.getNumColumns * mapa.getNumRows) + 1));		//RANDOM DE CANTIDAD DE MONEDAS
	int x;
	int y;
}

CoinManager::~CoinManager()
{
}
