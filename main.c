#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}dato;

int main()
{
    dato datito = {1, 'c'};
    dato* p;

    p = &datito;



    printf("\n%d", (*p).a);
    printf("\n%c", (*p).b);
    //se pone entre parentesis, porque el operador punto tiene prioridad anterior que el *
    //entonces devuelve la direccion de memoria de el campo a o b

    printf("\n%d", p->a);
    printf("\n%c", p->b);

    dato lista[2] = {{1,'c'},{2,'d'}};

    p = lista;

    for(int i=0 ; i<2 ; i++)
    {
        printf("\n%d", (*(p+i)).a);
        printf("\n%c", (*(p+i)).b);
    }




    return 0;
}
