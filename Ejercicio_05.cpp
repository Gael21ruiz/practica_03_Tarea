#include<stdio.h>
#include<stdlib.h>

int main(){
float edad,precio;
printf(" Bienvenido a la taquilla\n Precios:\n Precio normal: $75\n Precio de ni\xA4o: 60%% de descuento\n Precio de adulto mayor de 60 a\xA4os: 55%% de descuento\n");
printf("Introduzca su edad: ");
scanf("%f", & edad);
if(edad<10){
precio=0.4*75;
printf("El precio es: %f", precio);
}
else if(edad>60){
precio=0.45*75;
printf("El precio es: %f", precio);
}
else{
precio=75;
printf("El precio es de: %f", precio);
}
}
