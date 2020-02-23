#include<stdio.h>
#include<stdlib.h>

int main(){
int a;
printf("Introduzca un digito: ");
scanf("%d", &a);
int c=a%2;
if(c==0){
printf("El digito es par");
}
else{
int c=a%3;
if(c==0){
printf("El digito es impar divisible entre 3");
}
else{
printf("El digito es impar");
}
}
}

