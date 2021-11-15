#include <stdio.h>
#include <stdlib.h>
/*1. Dada una estructura ePais cuyos campos son id(int)
, nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
 Desarrollar una función llamada actualizarRecuperados
 que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país.
La función no devuelve nada.
*/

typedef struct{

    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
    int isEmpty;

}ePais;

int mostrarUno(ePais lista);
int mostrar(ePais lista[], int tam);
int ordenar(ePais lista[], int tam, int criterio);
void actualizarRecuperados(ePais lista[],int pais, int recuperadosDia, int tam);


int main()
{
    ePais hardcodeo[5] = {
        {1000, "Argentina", 150, 100, 140, 1},
        {1001, "Bolivia", 200, 130, 500, 1},
        {1002, "Brazil", 230, 90, 300, 1},
        {1003, "Uruguay", 140, 50, 200, 1},
        {1004, "Mexico", 100, 60, 150, 1},

    };


    mostrar(hardcodeo, 5);
    actualizarRecuperados(hardcodeo, 1000, 49, 5);
    mostrar(hardcodeo, 5);


    return 0;
}

void actualizarRecuperados(ePais lista[],int pais, int recuperadosDia, int tam)
{
    if(lista != NULL && (pais > 999 && pais <1005) && recuperadosDia >0 &&  tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            if(lista[i].id==pais)
            {
                lista[i].recuperados=lista[i].recuperados+recuperadosDia;
            }
        }
    }
}


int mostrarUno(ePais lista)
{
    int todoOk = 0;

        printf("%d \t %5s  \t  %d   \t%d  \t %d\n",

               lista.id,
               lista.nombre,
               lista.infectados,
               lista.recuperados,
               lista.muertos
               );

    return todoOk;
}


int mostrar(ePais lista[], int tam)
{
    int todoOk = 0;
    if(lista != NULL && tam > 0)
    {
                printf("***Lista***\n");
                printf("Id\t Pais \t Infectados \t Recuperados\t Muertos \n");
        for(int i = 0; i < tam; i++)
        {
            if(lista[i].isEmpty)
            {
                mostrarUno(lista[i]);
            }
        }
        todoOk = 1;
    }
    return todoOk;
}


