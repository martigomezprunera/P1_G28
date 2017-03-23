#include <cstdlib>
#include "CoinManager.h"
#include "Map.h"

CoinManager::CoinManager(Map &mymap) : mapa(mymap)
{
	new_money();
}

CoinManager::~CoinManager()
{
}

void CoinManager::change_money()
{
	c_monedas--;

	if (c_monedas <= 0)
	{
		new_money();
	}
}

void CoinManager::new_money()
{
	int counter = 0;
	do 
	{
		float max_monedas = ((mapa.numColumns * mapa.numRows) / 100 * 13);
		float min_monedas = ((mapa.numColumns * mapa.numRows) / 100 * 3);
		c_monedas = static_cast<int>((rand() % static_cast<int>(max_monedas - min_monedas) + min_monedas));
	
	} while (c_monedas == 0);

	while (counter < c_monedas)
	{
		int c_monedas_x = rand() % mapa.numRows;
		int c_monedas_y = rand() % mapa.numColumns;

		if (mapa.celda(c_monedas_x, c_monedas_y) == '.')
		{
			mapa.change(c_monedas_x, c_monedas_y, '$');
			counter++;
		}
	}
}

int CoinManager::getMoney()
{
	return c_monedas;
}
