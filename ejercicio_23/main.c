/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 08:56 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Sumar números en un vector de 10 elementos enteros hasta que el usuario
 * lo desee. Cuando finalicen las sumas visualizar por pantalla lo siguiente: 
 * Elemento 0 cantidad total ..... ....... Elemento 9 cantidad total
 */
void main() {
    int enteros[10], i, entrada;
    
    for(i = 0; i < (sizeof(enteros)/sizeof(int)); i++){
        enteros[i] = 0;
        do{
            printf("Ingrese el numero a sumar en la posicion %d :", i);
            scanf("%d", &entrada);
            if(entrada != 0)
                enteros[i] += entrada;
        }while(entrada != 0);
    }
    system("cls");
    for(i = 0; i < (sizeof(enteros)/sizeof(int)); i++){
        printf("Elemento %d cantidad total: %d\n", i, enteros[i]);
    }
    system("pause");
}