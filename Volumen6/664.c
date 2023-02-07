/*
	Nombre: Gálibo
	Numero: 664 (Volumen 6)
	Autor: focab0r
Simplemente hallando el mayor numero de altura de cada puente, y el menor de todos los puentes, se obtiene la solucion.
*/


#include <stdio.h>

int main()
{
    int flag = 0;
    int number = 1, carriles;
    int i, e;
    int carril, min = 801, max = 0;
    while (number != 0)					//Mientra no se reciba un 0, es decir, el final del ejercicio:
    {
        scanf("%d", &number);
        if (number != 0)
        {       
            for (i = 0; i < number; i++)		//Por cada puente en el recorrido:
            {
                scanf("%d", &carriles);
                for (e = 0; e < carriles; e++)		//Por cada carril en un puente:
                {
                    scanf("%d", &carril);		
                    if ( carril > max )			
                    {
                        max = carril;			//Asignar a max el valor de altura maximo del puente
                    }
                }
                if (max < min)
                {
                    min = max;				//Si se encuentra un puente cuya altura maxima es menor que min, asignar a min ese valor
                }
                max = 0;
            }
            printf("%d\n", min);			//Printear la variable min, que contiene la maxima altura que puede tener el vehiculo
        }
        min = 801;
        max = 0;
    }
    return 0;
}
