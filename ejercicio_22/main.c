/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 08:39 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Leer 20 números enteros positivos, indicar cual es el mayor y en que orden
 * fue leído (a que elemento pertenece). Mostrar el vector completo.
 */
void main() {
    const int n = 10;
    int enteros[n], i, mayor = 0, posicionMayor;
    
    for(i = 0; i < n; i++){
        do{
            printf("%d - Ingresar el primer entero positivo: ", i);
            scanf("%d", &enteros[i]);
        }while(enteros[i] < 0);
        if(mayor < enteros[i]){
            posicionMayor = i;
            mayor = enteros[i];
        }
    }
    system("cls");
    for(i = 0; i < n; i++){
        printf("Posicion: %d\t\tValor: %d\n", i, enteros[i]);
    }
    printf("\nMayor ingresado: %d\t\tPosicion: %d\n", mayor, posicionMayor);
    system("pause");
}

