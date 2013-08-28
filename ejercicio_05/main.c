/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:32 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Diseñar un algoritmo que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.
 */
int base;
int altura;

int main() {
    printf("Ingrese la base del triangulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &altura);
    printf("La superficie del triangulo es: %d\n", (base*altura/2));
    
    system ("pause");
    return 0;
}

