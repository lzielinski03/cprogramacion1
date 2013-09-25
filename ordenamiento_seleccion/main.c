/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 25 de septiembre de 2013, 09:22 AM
 */

#include <stdio.h>
#include <stdlib.h>

void seleccion(int vector[], size_t size);
void cargarVector(int vector[], size_t size);
void imprimirVector(int vector[], size_t size);

int enteros[10];

void main() {
    size_t size = sizeof(enteros)/sizeof(int);
    
    cargarVector(enteros, size);
    imprimirVector(enteros, size);
    seleccion(enteros, size);
    imprimirVector(enteros, size);
    
    system("pause");
}

void imprimirVector(int vector[], size_t size){
    int i;
    for (i = 0; i < size; i++)
        printf("Posicion: %d\tValor: %d\n", i, vector[i]);
}

void cargarVector(int vector[], size_t size){
    srand(time(NULL));
    int i;
    for (i = 0; i < size; i++) {
        vector[i] = rand() % 101;
    }
}

void seleccion(int vector[], size_t size) {
    printf("%s\n", "------------------------ | Ordenamiento por seleccion! | -----------------------");
    int x, y, aux, menor;
    for (x = 0; x < size; x++) {
        menor = x;
        for (y = x + 1; y < size; y++) {
            if (vector[menor] > vector[y])
                menor = y;
        }
        aux = vector[x];
        vector[x] = vector[menor];
        vector[menor] = aux;
    }
}