#pragma once
#include <cstdlib>
#include <ostream>

class Map
{
public:
	//CONSTRUCTORES Y DESTRUCTORES
	Map(int dificultad);													
	~Map(void);

	//METODOS
	//void ini_map();
	void change(int numRows, int numColumns, int value);			//CAMBIAR VALOR DE UNA CELDA
	void print_pantalla();											//PRINTAR POR PANTALLA LOS VALORES

private:

	//CONSTANTES
	
	//ATRIBUTOS												
	int **md;
	int numRows, numColumns, dificultad;


};