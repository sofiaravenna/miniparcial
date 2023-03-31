#include <stdio.h>

int main() {

    float nota, suma=0, promedio;
    int contador=0;

    printf("Ingresar la nota. Para finalizar el el programa ingrese -1.\n");


    do{
        printf("Ingresar la nota: ");

        scanf("%f",&nota);
        if(nota != -1){
        suma=suma+nota;
        contador=contador+1;}

    }
    while(nota != -1);
    promedio=suma/(contador);
    printf("El promedio del curso es: %f",promedio);

    return 0;
}
