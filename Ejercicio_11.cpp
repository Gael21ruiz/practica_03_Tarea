#include<stdio.h>
#include<stdlib.h>

int main(){
float m;
int a,b,c,d,A,B;
printf("Calculo de pendiente.\n");
printf("   y2-y1\n");
printf("m=-------\n");
printf("   x2-x1\n");
printf("Introduzca el valor de X1: ");
scanf("%d", &a);
printf("Introduzca el valor de Y1: ");
scanf("%d", &b);
printf("Introduzca el valor de X2: ");
scanf("%d", &c);
printf("introduzca el valor de Y2: ");
scanf("%d", &d);
A=d-b;
B=c-a;
if(B==0){
printf("La linea es vertical.\nCon Pendiente Infinita.");
}
else{
m=A/B;
printf("El valor de la pendiente es: %f",m);
}
}
