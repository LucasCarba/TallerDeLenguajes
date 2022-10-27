#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 , *file2;
    char direcciones[20], direc2[20];
    file1 = fopen ( "original.txt", "r" );
    file2 = fopen ( "copia.txt" , "w" );
    if(file1==NULL)
        printf("ERROR");
    if(file2==NULL){
        printf("ERROR");
    }
        else {
            fwrite(direcciones, sizeof(char),20, file1 );
            //LEE LO QUE HAY EN DIRECIONES
            fread( direc2, sizeof(char), 20, file2 );
            //ESCRIBE LO QUE HAY EN DIRECCIONES EN DIREC2
        }
    fclose ( file1 );
    fclose ( file2 );
    return 0;
}
