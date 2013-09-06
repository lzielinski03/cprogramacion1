/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 08:34 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Leer 10 elementos de un vector de enteros y mostrar su contenido
 */
void main() {
    int enteros[10], i;
    for(i = 0; i < 10; i++){
        enteros[i] = i;
        printf("Posicion: %d\t\tValor: %d\n", enteros[i], enteros[i]);
    }
    system("pause");
}