#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct numeros{
int edad;
int cantidad;
int promedio;
};
int main()
{   int cant;
    struct numeros n;
    char contenido[50];
    FILE* arch;
    int vector [3];
    int numero;
    int i;
    char *token;
    arch = fopen("1.txt", "r");
    if (arch == NULL){
        printf("ERROR");
    }
    else{
        fgets(contenido,50,arch);
        cant=0;
        while (!feof(arch)){
            while(token!=NULL){
                token = strtok(contenido, ",");
                numero= atoi(token);
                vector[cant]+=numero;
                ++cant;
            }
            fgets(contenido,50,arch);
            cant=0;
        }
    }
    for (i=0; i< 3; i++)
        printf("%d", vector[i]);
    return 0;
}
