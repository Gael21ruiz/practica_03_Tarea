
#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b,c;
printf("Introduzca el primer digito: ");
scanf("%d", &a);
printf("Introduzca el segundo digito: ");
scanf("%d", &b);
while(b==0){
 printf("El primer digito no es divisible entre el segundo\n");
 printf("Introduzca de nuevo el segundo digito: ");
 scanf("%d", &b);
}
 c=a/b;
 printf("El primer digito si es divisible entre el segundo, con valor: %d", c);
}
