/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 10:53 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escribir el algoritmo necesario para calcular  y mostrar el cuadrado de un número. 
 * El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
 */
int media;
int main() {
    printf("Calcular el cuadrado de un numero.\nIngrese el numero: ");
    scanf("%d", &media);
    if(media <= 0){
        printf("ERROR, el numero debe ser mayor que cero.\n");
    }else{
        media *= media;
        printf("El cuadrado es %d \n", media);
    }
     system ("pause");
     return 0;
}