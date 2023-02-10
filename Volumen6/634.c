/*

	Nombre: Bandurria Hero
	Numero: 634 (Volumen 6)
	Autor: focab0r

El problema se plantea de la siguiente manera: Primero, se recibe una linea de casos y se guarda en un string. Luego, por cada caracter del string, y hasta el final de la cadena (calculable mediante strlen()), si se obtiene un O, se añade a la puntuacion y se avanza el multiplicador. En caso contrario, se elimina el multiplicador.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int number, length;
    char string[10001];
    int i, e, h;
    int flag = 0, puntuacion;
    scanf("%d", &number);
    for (i = 0; i < number; i++)			//Por cada numero de casos que haya:
    {
        scanf("%s", string);				//Escanear el string
        length = strlen(string);			//Calcular la longitus del string
        e = 0;						//Ajustar todas las variables para el nuevo caso
        h = 1;
        puntuacion = 0;
        for (e = 0; e < length; e++)			//Por cada caracter del string:
        {
            if ( string[e] == 'O')			//Si el string es igual a O:
            {
                puntuacion = puntuacion + h * 10;	//Multiplicar 10 por el multiplicador (En el primer caso, 1) y sumarle la puntuacion anterior
                h++;					//Avanzar el multiplicador en 1
            }
            else
            {
                h = 1;					//Volver a eliminar el multiplicador (Es decir, dejarlo a 1)
            }
        }
        printf("%d\n", puntuacion);			//Printear la puntuacion
    }
    return 0;
}
