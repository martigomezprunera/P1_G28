#pragma once
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
	void change(int numRows, int numColumns, char value);			//CAMBIAR VALOR DE UNA CELDA
	void print_pantalla();											//PRINTAR POR PANTALLA LOS VALORES										//POSICIONAR PUNTOS EN EL MAPA
	int getNumRows();												//DEVOLVER NUMERO DE FILAS
	int getNumColumns();											//DEVOLVER NUMERO DE COLUMNAS
	char celda(int x, int y);										//CELDA DONDE ESTAMOS POSICIONADOS

private:

	//CONSTANTES
	
	//ATRIBUTOS PRIVADOS									
	char **md;
};