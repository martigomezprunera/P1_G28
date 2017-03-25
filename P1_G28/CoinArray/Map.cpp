#include "Map.h"
#include <iostream>

Map::Map(int dificultad)
{
	numRows = (rand() % ((dificultad * 5 * 2) - (5 * dificultad)) + 5 * dificultad);
	numColumns = (rand() % ((dificultad * 5 * 2) - (5 * dificultad)) + 5 * dificultad);

	//CREAMOS MATRIZ
	//TANTOS PUNTEROS COMO FILAS
	md = new char *[numRows];

		//PEDIMOS MEMORIA PARA CADA COLUMNA
		for (int i = 0; i < numRows; i++)
		{
			md[i] = new char[numColumns + 1];

			//POSICIONAMOS LOS PUNTOS EN EL TABLERO
			for (int j = 0; j < numColumns; j++)
				md[i][j] = '.';
		}
};

Map::~Map(void)
{
	//LIBERAMOS MEMORIA
	for (int i = 0; i < numRows; i++)
		delete[] md[i];
	delete[] * md;
}

void Map::change(int x, int y, char value)
{
			md[x][y] = value; //MI VALOR 
}

void Map::print_pantalla()
{
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {
			std::cout << md[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

char Map::celda(int x, int y)
{
	return md[x][y];
}

/*int Map::getNumRows()
{
	return numRows;
}

int Map::getNumColumns()
{
	return numColumns;
}*/
