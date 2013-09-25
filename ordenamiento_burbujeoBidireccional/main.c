/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 25 de septiembre de 2013, 09:21 AM
 */

#include <stdio.h>
#include <stdlib.h>

void burbujeoBidireccional(int vector[], size_t size);
void cargarVector(int vector[], size_t size);
void imprimirVector(int vector[], size_t size);

int enteros[10];

void main() {
    size_t size = sizeof(enteros)/sizeof(int);
    
    cargarVector(enteros, size);
    imprimirVector(enteros, size);
    burbujeoBidireccional(enteros, size);
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

void burbujeoBidireccional(int vector[], size_t size) {
    printf("%s\n", "----------------- | Ordenamiento por burbujeo bidireccional! | -----------------");
    int ultimo, izquierda, derecha, x, y, aux;;
    do{
        for(x = size-1; x > 0; x--){
            if(vector[x-1] > vector[x]){
                aux = vector[x];
                vector[x] = vector[x-1];
                vector[x-1] = aux;
                ultimo = x;
            }
        }
        izquierda = ultimo+1;
        for(x = 1; x < size-1; x++){
            if(vector[x-1] > vector[x]){
                aux = vector[x];
                vector[x] = vector[x-1];
                vector[x-1] = aux;
                ultimo = x;
            }
        }
        derecha = ultimo-1;   
    }while(derecha >= izquierda);
}