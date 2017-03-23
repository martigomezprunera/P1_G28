#include "Map.h"
#include <iostream>

Map::Map(int dificultad)
{
	numColumns = (5 * dificultad + rand() % 5);
	numRows	= (5 * dificultad + rand() % 5);

	//CREAMOS MATRIZ
	//TANTOS PUNTEROS COMO FILAS
	md = new char*[numRows];

		//PEDIMOS MEMORIA PARA C,ADA COLUMNA
		for (int i = 0; i < numRows; i++)
		{
			md[i] = new char[numColumns];
		}

		//POSICIONAMOS LOS PUNTOS EN EL TABLERO
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				md[i][j] = '.';
			}
		}
};

Map::~Map(void)
{
	//LIBERAMOS MEMORIA
	for (int i = 0; i < numRows; i++)
	{
		delete[]md[i];
		delete[]md;
	}
}

void Map::change(int x, int y, char value)
{
			md[x][y] = value; //MI VALOR
}



void Map::print_pantalla()
{
	for (int i = 0; i<numRows; i++)
	{
		std::cout << std::endl;
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

char Map::celda(int x, int y)
{
	return md[x][y];
}
