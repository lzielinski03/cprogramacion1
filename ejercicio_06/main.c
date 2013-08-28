/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:42 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es positivo o negativo
 */
int numero;

int main() {
    printf("Introducir un numero: ");
    scanf("%d", &numero);
    if(numero > 0)
        printf("El numero %d es positivo.\n", numero);
    else if(numero < 0)
        printf("El numero %d es negativo.\n", numero);
    
    system ("pause");
    return 0;
}