#include<stdio.h>
#include<stdlib.h>

int main(){
float base,altura,a,b,area;
int opt;
printf("\n   Calculo de areas.\n\n");
printf(" 1.-Calcular el area de un triangulo.\n 2.-Calcular el area de un trapecio.\n 3.-Calcular el area de un rectangulo.\n");
printf(" Seleccione una opcion: ");
scanf("%d", &opt);
switch(opt){
case 1:
printf("Introduce la base: \n");
scanf("%f", &base);
printf("Introduce la altura: \n");
scanf("%f", &altura);
area=(base*altura)/2;
printf("\nEl area del triangulo es: %f",area);
break;
case 2:
printf("Introduce el lado a: \n");
scanf("%f", &a);
printf("Introduce el lado b: \n");
scanf("%f", &b);
printf("Introduce la altura: \n");
scanf("%f", &altura);
area=((a+b)*altura)/2;
printf("\nEl area del trapecio es: %f",area);
break;
case 3:
printf("Introduce la base: \n");
scanf("%f", &base);
printf("Introduce la altura: \n");
scanf("%f", &altura);
area=base*altura;
printf("\nEl area del rectangulo es: %f",area);
break;
default:
printf("\nError, opcion invalida\n");
}
}
