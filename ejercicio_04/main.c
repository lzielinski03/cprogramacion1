/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:21 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del círculo de radio dado.
 */
int radio;

int main(int argc, char** argv) {
    printf("Ingrese el radio del circulo: ");
    scanf("%d", &radio);
    printf("El area del circulo dado es: %f\n", (3.14*(radio*radio)));
    printf("La longitud de la circunferencia del circulo dado es: %f\n", (3.14*(radio*2)));
    
    system ("pause");
    return 0;
}