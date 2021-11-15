#include <stdio.h>
#include <stdlib.h>

/*. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como
parámetro y su responsabilidad
es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU *
*/
int invertirCadena(char cadena[]);

int main()
{
    char nombre[20] = "UTN-FRA";

    invertirCadena(nombre);

    printf("%s", nombre);

    return 0;
}
int invertirCadena(char cadena[])
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

                    auxiliar=cadena[i];
                    cadena[i]=cadena[j];
                    cadena[j]=auxiliar;
            }
        }
    }
    return todoOk;
}
