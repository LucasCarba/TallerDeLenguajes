#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMITE 50

int main() {
    char cadena1 [LIMITE];
    char letra;
    int cant=0, mayuscula=0, minuscula=0;
    FILE* fichero;
    fichero = fopen("ejercicio3.txt", "wb+");
    if (fichero==NULL)
        fprintf(stdout, "ERROR!!!");
    else{
         fprintf(stdout, "El archivo esta abierto.");
         fprintf(fichero, "aTsASUIsdñwkWSPAsfaKJ");
         while (feof(fichero)){
            letra=fgetc(fichero);
            printf("%c",letra);
            ++cant;
            fprintf(stdout, "%d",cant);
            if(letra >= 'a' && letra <= 'z')
                ++minuscula;
            if(letra >= 'A' && letra <= 'Z')
                ++mayuscula;
            }
    printf("%d %d", minuscula, mayuscula);
    fclose(fichero);
    return 0;
}
}
