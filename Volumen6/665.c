/*
	Nombre: SemVer++
	Numero: 665 (Volumen 6)
	Autor: focab0r
Este ejercicio se ha resuelto recorriendo todos los posibles valores de las versiones. Es posible hacer un algoritmo mas eficiente,
este es solo un ejemplo. 
*/


#include <stdio.h>

int main()
{
    int number;
    int i, e;
    int number1[4], number2[4];
    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        scanf("%d.%d.%d", &number1[0], &number1[1], &number1[2]);	//Guardar todos los valores del primer numero en el array number1
        scanf("%d.%d.%d", &number2[0], &number2[1], &number2[2]);	//Guardar todos los valores del segundo numero en el array number2
        if (number1[0] == number2[0])					//Si el primer numero de ambas versiones es igual:
        {
            if ((number1[1]+1) == number2[1])				//Si el segundo numero de la segunda version es 1 unidad mayor que el de la primera version:
            {
                if (number2[2] == 0)					//Si el tercer numero de la segunda version es igual a 0, printear SI
                {
                    printf("SI\n");
                }
                else							//En caso contrario, printear NO
                {
                    printf("NO\n");
                } 
            }
            else if (number1[1] == number2[1])				//Si el segundo numero de ambas versiones es igual a 0:
            {
                if (number1[2] == (number2[2]-1))			//Si el tercer numero de la primera version es igual al de la segunda version menos 1, printear SI
                {
                    printf("SI\n");
                }
                else							//En caso contrario, printear NO
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }         
        }
        else if ((number1[0]+1) == number2[0])				//Si el primer numero de la segunda version es 1 unidad mayor que el de la primera version:
        {
            if (number2[1] == 0 && number2[2] == 0)			//Si el segundo y el tercer numero son iguales a 0, printear SI
            {
                printf("SI\n");
            }
            else							//En caso contrario, printear NO
            {
                printf("NO\n");	
            } 
        }
        else								//En caso contrario, printear NO
        {
            printf("NO\n");
        } 
    }
    return 0;    
}
