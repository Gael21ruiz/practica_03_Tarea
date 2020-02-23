#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b;
printf("Introduzca el primer digito: ");
scanf("%d", &a);
printf("Introduzca el segundo digito: ");
scanf("%d", &b);
if(a>b){
printf("El primer digito es mayor");
}
else if(a<b){
printf("El segundo digito es mayor");
}
else{
printf("Los dos digitos son iguales");
}
}
