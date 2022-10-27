#include <stdio.h>
#include <stdlib.h>
struct lis {
int numero;
struct lis *sig;
};
typedef struct lis lista;
int num;
lista l;
CrearLista(lista *l, int num);
int main()
{
    scanf(" %d", &num);
    CrearLista(l, num);
    return 0;

}
lista* CrearLista (lista *l, int num)
{
    lista nuevo;
    nuevo = (lista) malloc (sizeof(struct lis));
    nuevo->numero = num;
    nuevo->sig = NULL;
    l=nuevo;
    return lista;
}

 }
