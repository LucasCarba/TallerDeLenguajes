#include <stdio.h>
#include <stdlib.h>
#include<time.h>
struct mazo {
int c[40];
};

void inicializo (struct mazo *m);
void barajar(struct mazo *m);
void sacarCarta(struct mazo *m);
void agregarDeNuevo(struct mazo *m);
int main()
{
    int i,j,r;
    struct mazo m;
    printf("Inicializar el mazo: \n");
    inicializo (&m);
    for (i=0; i<40; i++){
        printf(" carta %d valor %d  \n", i, m.c[i]);
    }
    barajar(&m);
    for(j=0; j<40; j++){
    printf ("Barajado: %d \n", m.c[j]);
    }
    sacarCarta(&m);
    agregarDeNuevo(&m);
    return 0;
}
void inicializo (struct mazo *m){
int i, numero;
srand (time(NULL));
for (i=0; i<40; i++){
    numero = rand() % 11;
    m->c[i]= numero;
}
}
void barajar (struct mazo *m)
{
    int i,j;
    int aux[40];
    for (j=0; j<40; j++){
        aux[j]= m->c[j];
    }
    for (i=0; i<40; i++){
        m->c[i]=aux[39-i];
    }
}
void sacarCarta(struct mazo *m){
    int j,k;
    int aux[39];
    for (j=0; j<39; j++){
        aux[j]= m->c[j];
    }
    for (k=0; k<39; k++){
        printf(" carta %d valor %d  \n", k, aux[k]);
    }
    }
void agregarDeNuevo(struct mazo *m){
    int i;
    for (i=0; i<40; i++){
        printf(" carta %d valor %d  \n", i, m->c[i]);
    }
}
