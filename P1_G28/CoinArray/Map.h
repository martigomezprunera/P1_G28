#pragma once
#include <ostream>

class Map
{
public:
	//ATRIBUTOS PUBLCIOS
	int numRows;													//X
	int numColumns;													//Y

	//CONSTRUCTORES Y DESTRUCTORES
	//Map();														//DEFAULT MAP
	Map(int dificultad);													
	~Map(void);

	//METODOS
	//void print_pantalla();										//PRINTAR POR PANTALLA LOS VALORES
	//int getNumRows();												//DEVOLVER NUMERO DE FILAS
	//int getNumColumns();											//DEVOLVER NUMERO DE COLUMNAS
	char celda(int x, int y);										//CELDA DONDE ESTAMOS POSICIONADOS
	void change(int x, int y, char value);							//CAMBIAR VALOR DE UNA CELDA
	friend std::ostream& operator<< (std::ostream &out, Map map);	//PRINTAR POR PANTALLA LOS VALORES


private:

	//CONSTANTES
	
	//ATRIBUTOS PRIVADOS									
	char **md;

};