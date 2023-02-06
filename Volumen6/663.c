/*

	Nombre: Contando desde el cero
	Numero: 663 (Volumen 6)
	Autor: focab0r

Se trata de un programa sencillo, en el cual simplemente restando 1 a los años positivos, conseguimos transformarlos a años del supuesto calendario. Como a los numeros negativos no les afecta el 0, simplemente se printean igual.

*/


#include <stdio.h>

int main()
{
    int numbers;
    int newNumber;
    int i = 0;
    scanf("%d", &numbers);
    for (i = 0; i < numbers; i++)		//Por cada numero de casos que haya:
    {
        scanf("%d", &newNumber);		//Leer el año
        if (newNumber > 0)
        {
            printf("%d\n", newNumber - 1);	//Si es positivo, restarle 1 y printearlo
        }
        else
        {
            printf("%d\n", newNumber);		//Si no es positivo (por lo que es negativo), printearlo
        }
    }
    return 0;
}
