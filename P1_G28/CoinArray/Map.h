#pragma once
#include <ostream>

class Map
{
public:
	//ATRIBUTOS PUBLCIOS
	int numRows;													//X
	int numColumns;													//Y

	//CONSTRUCTORES Y DESTRUCTORES
	Map(int dificultad);													
	~Map(void);

	//METODOS
	void print_pantalla();											//PRINTAR POR PANTALLA LOS VALORES
	//int getNumRows();												//DEVOLVER NUMERO DE FILAS (En caso que lod atributos fueran privados)
	//int getNumColumns();											//DEVOLVER NUMERO DE COLUMNAS (En caso que lod atributos fueran privados)
	char celda(int x, int y);										//CELDA DONDE ESTAMOS POSICIONADOS
	void change(int x, int y, char value);							//CAMBIAR VALOR DE UNA CELDA


private:

	//CONSTANTES
	
	//ATRIBUTOS PRIVADOS									
	char **md;

};