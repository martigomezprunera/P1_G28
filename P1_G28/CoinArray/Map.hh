#pragma once
#include <cstdlib>
#include <ostream>

class Map
{
public:
	//ATRIBUTOS PUBLCIOS

	//CONSTRUCTORES Y DESTRUCTORES
	Map(int dificultad);													
	~Map(void);

	//METODOS
	void change(int numRows, int numColumns, char value);			//CAMBIAR VALOR DE UNA CELDA
	void print_pantalla();											//PRINTAR POR PANTALLA LOS VALORES
	int getNumRows();												//DEVOLVER NUMERO DE FILAS
	int getNumColumns();											//DEVOLVER NUMERO DE COLUMNAS

private:

	//CONSTANTES
	
	//ATRIBUTOS PRIVADOS									
	int **md;
	int numRows, numColumns;

};