#include <stdio.h>

int main () {

    FILE *file1 , *file2;
    int data1 =0;

    file1 = fopen ( "original.txt", "r" );
    file2 = fopen ( "copia.txt" , "w" );

    while ( (data1 = fgetc ( file1 )) != EOF ) {
        fputc ( data1, file2 );
    }

    fclose ( file1 );
    fclose ( file2 );

    return 0;
}
