#pragma once
#include <cstdlib>
#include <ostream>

class Map
{
public:
	//ATRIBUTOS PUBLCIOS
	int numRows, numColumns;

	//CONSTRUCTORES Y DESTRUCTORES
	Map(int dificultad);													
	~Map(void);

	//METODOS
	void change(int numRows, int numColumns, int value);			//CAMBIAR VALOR DE UNA CELDA
	void print_pantalla();											//PRINTAR POR PANTALLA LOS VALORES

private:

	//CONSTANTES
	
	//ATRIBUTOS PRIVADOS									
	int **md;

};