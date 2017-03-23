#include "Map.hh"
#include <cstdlib>
#include <iostream>

Map::Map(int dificultad)
{
		numColumns = (5 * dificultad) + rand() % ((5 * dificultad * 2) - (5 * dificultad) + 1);
		numRows = (5 * dificultad) + rand() % ((5 * dificultad * 2) - (5 * dificultad) + 1);

		//CREAMOS MATRIZ
		//TANTOS PUNTEROS COMO FILAS
		md = new int*[numRows];

		//PEDIMOS MEMORIA PARA CADA COLUMNA
		for (int i = 0; i < numRows; i++)
		{
			md[i] = new int[numColumns];
		}

		//ACCEDEMOS CON SUBINDICES
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				md[i][j] = 0;
			}
		}
}

Map::~Map(void)
{
	//LIBERAMOS MEMORIA
	for (int i = 0; i < numRows; i++)
	{
		delete[]md[i];
		delete[]md;
	}
}

void Map::change(int numRows, int numColumns, char value)
{
	for (int i = 0; i<numRows; i++)
	{
		for (int j = 0; j<numColumns; j++)
		{
			md[i][j] = value; //MI VALOR
		}
	}
}

void Map::print_pantalla()
{
	for (int i = 0; i<numRows; i++)
	{
		for (int j = 0; j<numColumns; j++)
		{
			std::cout << md[i][j];
		}
	}
}

int Map::getNumRows()
{
	return numRows;
}

int Map::getNumColumns()
{
	return numColumns;
}
