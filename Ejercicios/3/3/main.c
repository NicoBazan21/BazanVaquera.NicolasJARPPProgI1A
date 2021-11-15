#include <stdio.h>
#include <stdlib.h>

/*Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro y
 su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos
  "algoritmo" la deja como "agilmoort"
  */

int ordenarCaracteres(char cadena[]);

int main()
{
    char nombre[20] = "Algoritmo";

    ordenarCaracteres(nombre);

    printf("%s", nombre);

    return 0;
}
int ordenarCaracteres(char cadena[])
{
    int todoOk = 0;
    int tam;

    char auxiliar;

    if(cadena != NULL)
    {
        tam=strlen(cadena);

        for(int i=0;i<tam-1;i++)
        {
            for(int j = i+1; j < tam; j++)
            {
                if(cadena[i]> cadena[j])
                {
                    auxiliar=cadena[i];
                    cadena[i]=cadena[j];
                    cadena[j]=auxiliar;
                }
            }
        }
    }
    return todoOk;
}
