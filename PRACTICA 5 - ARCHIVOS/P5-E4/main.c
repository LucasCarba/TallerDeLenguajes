#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
FILE* arch;
char caracter, aux,auxx;
char max=0, maxx=0;
arch = fopen("precipitaciones.txt", "r+");
    if (arch==NULL)
        fprintf(stdout, "ERROR!!!");
    fprintf(stdout, "El archivo esta abierto.");
        while (feof(arch)==0){
            caracter= fgetc(arch);
            aux=0;
            if(caracter != '-' ){
                aux=caracter;
                printf("%c ", aux);
                caracter= fgetc(arch);
                if(caracter != '-' ){
                printf("%c \n", caracter);
                auxx=caracter;
                if((aux>=max)&&(auxx>maxx)){
                    max=aux;
                    maxx=auxx;
                }}
                else{
                printf("\n");
                }
        }
        }
    printf("MAXIMO %c %c",max,maxx);
    fclose(arch);
return 0;
}
