#include "Map.hh"

Map::Map(int dificultad)
{
	switch (dificultad)
	{
	//RANGO DE NUMS RANDS
	case 1:
		numColumns = 5 + rand() % (10 - 5 + 1);
		numRows = 5 + rand() % (10 - 5 + 1);
		break,
	case 2:
		numColumns = 10 + rand() % (20 - 10 + 1);
		numRows = 10 + rand() % (20 - 10 + 1);
		break;
	case 3:
		numColumns = 30 + rand() % (30 - 15 + 1);
		numRows = 30 + rand() % (30 - 15 + 1);
		break;
	default:
		break;
	}
}

Map::~Map(void)
{
}

void Map::ini_map()
{
	//TANTOS PUNTEROS COMO FILAS
	md = new int*[numRows];

	//PEDIMOS MEMORIA PARA CADA COLUMNA
	for(int i = 0; i < numRows; i++)
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

	//LIBERAMOS MEMORIA
	for (int i = 0; i < numRows; i++)
	{
		delete[]md[i];
		delete[]md;
	}
}

void Map::change(int numRows, int numColumns, int value)
{
}

void Map::print_pantalla()
{
}
