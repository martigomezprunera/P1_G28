#pragma once
#include <ostream>

class Map
{
public:
	//CONSTRUCTORES Y DESTRUCTORES
	Map(void);													
	~Map(void);

	//METODOS
	void ini_map(int numRows, int numColumns, int dificultad);

private:
	//CONSTANTES


	//ATRIBUTOS												
	int **md;
	int numRows, numColumns, dificultad;


};