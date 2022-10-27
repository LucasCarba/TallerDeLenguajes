#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* diccionario;
    FILE* arch;
    arch= fopen("palabras.txt", "w");
    diccionario= fopen("diccionario.txt", "r");
    if (arch== NULL){
        perror("ERROR! \n");
    }
    else{
        char escribir[20];
        scanf("%s", escribir);
        fprintf(arch,"%s", escribir);
        while(escribir != "zzz"){
            scanf("%s", escribir);
            fprintf(arch,"%s", escribir);
        }
    }
    if (diccionario== NULL){
        perror("ERROR! \n");
    }
}
