#include <stdio.h>
int main(){
 int vector[10]={10,20,30,40,50,60,70,80,90,100};
 int i;
 int *p= vector;
 for (i=0; i<10; i++){
 *p += 3;
 printf("vector[%d] = %d \n", i, vector[i]);
 p+=2;
 }
 }

