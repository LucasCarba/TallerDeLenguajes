#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[]) {
int promedio=0;
printf("\nargc = %d",argc);
if(argc != 5){
    printf("ERROR");
}
else{
    for(int i=0; i< 5; i++){
        printf("NUMEROS %s", argv[i]);
        char caracter = argv[i];
        int comoEntero = caracter - '0';
        promedio+=comoEntero;
    }
    promedio/=4;
    argv[5]=promedio;
}

return 0;
}
