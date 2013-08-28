/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:49 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es par o impar
 */
int numero;

int main(int argc, char** argv) {
    printf("Introduscir un numero: ");
    scanf("%d", &numero);
    if((numero%2) == 0)
        printf("El numero %d es par.\n", numero);
    else
        printf("El numero %d es inpar.\n", numero);
    
    system ("pause");
    return 0;
}