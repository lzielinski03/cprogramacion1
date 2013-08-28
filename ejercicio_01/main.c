/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 08:43 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Ejercicio 1: Ingresar 5 numeros y calcular su media.
 */
float total = 0;
float ingreso;
int i;

int main() {

    printf("Ejercicio 1: Ingresar 5 numeros y calcular su media.\n");
    for(i = 1; i < 6; i++){
        printf("%d. Ingresar numero: ", i);
        scanf("%f", &ingreso);
        total += ingreso;
    }
    total = total/5;
    printf("La media es %.2f: \n", total);
    system ("pause");
    return 0;
}

