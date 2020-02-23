#include<stdio.h>
#include<stdlib.h>

int main(){
int x,a;
printf("Calculo de funciones.\n");
printf("f(x)= X+3 si x<0 o x=0\n");
printf("f(x)= x^2+2x si x>0\n");
printf("Introduzca el valor de x: ");
scanf("%d",&x);
if(x<0){
a=x+3;
printf("El resultado es %d",a);
}
else if(x==0){
a=x+3;
printf("El resultado es %d",a);
}
else{
a=(x*x)+(2*x);
printf("El resultado es %d",a);
}
}
