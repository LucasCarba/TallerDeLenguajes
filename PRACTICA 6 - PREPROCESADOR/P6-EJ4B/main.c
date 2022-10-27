#include <stdio.h>
#include <stdlib.h>
#define SIZE 25
void imprimir(int * v);
int main(){
 int v[SIZE];
 imprimir(v);
 return 0;
}
void imprimir(int * v){
 int i;
 for (i=0; i<SIZE; i++){
 printf("v[%d]= %d", i, v[i]);
 }
}
