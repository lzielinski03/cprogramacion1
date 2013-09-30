/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 11:01 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Leer 20 números enteros positivos. Mostrar el vector tal como fue
 * ingresado y luego mostrar el vector ordenado en forma decreciente.
 */
const int n = 20;
int enteros[20], i, x, y, aux, menor, mayor;
void seleccionInvertida();

void main() {
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        enteros[i] = rand() % 101;
        //enteros[i] = i;
        printf("Posicion: %d\tValor: %d\n", i, enteros[i]);
    }
    printf("----------\n");
    seleccionInvertida();
    for (i = 0; i < n; i++) {
        printf("Posicion: %d\tValor: %d\n", i, enteros[i]);
    }
    system("pause");
}

void seleccionInvertida() {
    for (x = 0; x < n; x++) {
        menor = x;
        for (y = x + 1; y < n; y++) {
            if (enteros[menor] < enteros[y])
                menor = y;
        }
        aux = enteros[x];
        enteros[x] = enteros[menor];
        enteros[menor] = aux;
    }
}