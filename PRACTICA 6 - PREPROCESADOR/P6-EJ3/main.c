#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[]) {
if (argc != 4){
    printf("ERROR");
}
else{
    char xx = argv[1];
    int x = xx - '0';


    char yy = argv[2];
    int y = yy - '0';

    int resultado=0;

    if(argv[3]=='+')
    resultado = x+y;

    if (argv[3]=='-')
    resultado = x-y;

    if(argv[3]=='/')
    resultado = x/y;

    if(argv[3]=='*')
    resultado = x*y;
}
return 0;
}
