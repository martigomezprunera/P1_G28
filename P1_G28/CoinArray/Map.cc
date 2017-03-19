#include "Map.hh"

Map::Map()
{
}

Map::~Map(void)
{
}

void Map::ini_map(int numRows, int numColumns, int dificultad)
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
