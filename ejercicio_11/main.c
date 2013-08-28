/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 04:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Hacer el algoritmo que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.
 */
int i, numero, mayor = 0, menor = 99999;

int main() {
    for(i = 0; i < 5; i++){
        printf("%d. Ingresar un numero: ", i);
        scanf("%d", &numero);
        if(numero > mayor)
           mayor = numero;
        if(numero < menor)
            menor = numero;
    }
    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
    system("pause");
    return (0);
}