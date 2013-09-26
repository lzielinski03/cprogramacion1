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
void burbujeo();
void seleccion();
void insercion();
void burbujeoBidireccional();

void main() {
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        enteros[i] = rand() % 101;
        //enteros[i] = i;
        printf("Posicion: %d\tValor: %d\n", i, enteros[i]);
    }
    printf("----------\n");
    burbujeoBidireccional();
    for (i = 0; i < n; i++) {
        printf("Posicion: %d\tValor: %d\n", i, enteros[i]);
    }
    system("pause");
}

void burbujeo() {
    for (x = 0; x < n - 1; x++) {
        for (y = 0; y < n - 1; y++) {
            if (enteros[y] > enteros[y + 1]) {
                aux = enteros[y + 1];
                enteros[y + 1] = enteros[y];
                enteros[y] = aux;
            }
        }
    }
}

void burbujeoBidireccional(){
    int ultimo, izquierda, derecha;
    do{
        for(x = n-1; x > 0; x--){
            if(enteros[x-1] > enteros[x]){
                aux = enteros[x];
                enteros[x] = enteros[x-1];
                enteros[x-1] = aux;
                ultimo = x;
            }
        }
        izquierda = ultimo+1;
        for(x = 1; x < n-1; x++){
            if(enteros[x-1] > enteros[x]){
                aux = enteros[x];
                enteros[x] = enteros[x-1];
                enteros[x-1] = aux;
                ultimo = x;
            }
        }
        derecha = ultimo-1;   
    }while(derecha >= izquierda);
}

void seleccion() {
    for (x = 0; x < n; x++) {
        menor = x;
        for (y = x + 1; y < n; y++) {
            if (enteros[menor] > enteros[y])
                menor = y;
        }
        aux = enteros[x];
        enteros[x] = enteros[menor];
        enteros[menor] = aux;
    }
}

void insercion() {
    for (x = 1; x < n; x++) {
        aux = enteros[x];
        for (y = x - 1; y >= 0 && aux < enteros[y]; y--) {
            enteros[y + 1] = enteros[y];
        }
        enteros[y + 1] = aux;
    }
}