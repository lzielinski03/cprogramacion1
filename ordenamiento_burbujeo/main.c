/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 25 de septiembre de 2013, 09:20 AM
 */

#include <stdio.h>
#include <stdlib.h>

void burbujeo(int vector[], size_t size);
void cargarVector(int vector[], size_t size);
void imprimirVector(int vector[], size_t size);

int enteros[10];

void main() {
    size_t size = sizeof(enteros)/sizeof(int);
    
    cargarVector(enteros, size);
    imprimirVector(enteros, size);
    burbujeo(enteros, size);
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

void burbujeo(int vector[], size_t size) {
    printf("%s\n", "------------------------ | Ordenamiento por burbujeo! | -----------------------");
    int x, y, aux;
    for (x = 0; x < size - 1; x++) {
        for (y = 0; y < size - 1; y++) {
            if (vector[y] > vector[y + 1]) {
                aux = vector[y + 1];
                vector[y + 1] = vector[y];
                vector[y] = aux;
            }
        }
    }
}