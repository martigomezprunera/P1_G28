#include "Map.h"
#include <iostream>

/*Map::Map()
{
	numRows = 5 + rand() % 5;
	numColumns = 5 + rand() % 5;

	md = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		md[i] = new char[numColumns];

		//POSICIONAMOS LOS PUNTOS EN EL TABLERO
		for (int j = 0; j < numColumns; j++)
			md[i][j] = '.';
	}

}*/

Map::Map(int dificultad)
{
	numRows = 5 * dificultad + (rand() % ((5 * dificultad * 2) - 5 * dificultad));
	numColumns = 5 * dificultad + (rand() % ((5 * dificultad * 2) - 5 * dificultad));

	//CREAMOS MATRIZ
	//TANTOS PUNTEROS COMO FILAS
	md = new char *[numRows];

		//PEDIMOS MEMORIA PARA CADA COLUMNA
		for (int i = 0; i < numRows; i++)
		{
			md[i] = new char[numColumns];

			//POSICIONAMOS LOS PUNTOS EN EL TABLERO
			for (int j = 0; j < numColumns; j++)
				md[i][j] = '.';
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
			//md[y][x] = value; //MI VALOR
}

/*void Map::print_pantalla()
{
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {
			std::cout << md[i][j];
		}
		std::cout << std::endl;
	}
}*/

char Map::celda(int x, int y)
{
	return md[x][y];
	//return md[y][x];
}

/*int Map::getNumRows()
{
	return numRows;
}

int Map::getNumColumns()
{
	return numColumns;
}*/

std::ostream & operator<<(std::ostream & out, Map map)
{
	// TODO: insertar una instrucción return aquí
	for (int i = 0; i < map.numRows; i++) {	//go through every cell
		for (int j = 0; j < map.numColumns; j++) {
			out << map.celda[i][j] << " "; //print the cell, example: ". "
		}
		out << std::endl;
	}
	return out;

}
