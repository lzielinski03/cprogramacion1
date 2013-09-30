/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 30 de septiembre de 2013, 10:41 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Inicializar a cero una matriz de 6 filas por 5 columnas. Cargar valores
 * enteros en un elemento determinado, para lo cual se debe informar número de
 * fila y de columna y luego ingresar el valor a cargar. Mostrar la matriz por
 * filas y luego por columnas
 */

const int filas = 6, columnas = 5;

void main() {
    
    int enteros[filas][columnas], i, x, fila, columna;
    
    for(i = 0; i < filas; i++){
        for(x = 0; x < columnas; x++)
            enteros[i][x] = 0;
    }
    
    printf("Ingrese fila: ");
    scanf("%d", &fila);
    
    printf("Ingrese columna: ");
    scanf("%d", &columna);
    
    printf("Ingrese valor:");
    scanf("%d", &enteros[fila][columna]);
    
    for(i = 0; i < filas; i++){
        for(x = 0; x < columnas; x++)
            printf("Fila: %d\t\tColumna: %d\tValor: %d\n", i, x, enteros[i][x]);
        printf("\n");
    }
    system("pause");
}