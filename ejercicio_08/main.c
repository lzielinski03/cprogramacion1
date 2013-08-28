/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:55 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escribir el algoritmo que me permita leer un número decimal que representa una cantidad de grados 
 * Celsius y convierta dicho valor a la cantidad equivalente en grados Fahrenheit. La salida del programa 
 * puede ser de la siguiente forma: 100  grados celsius son 212 grados Fahrenheit
 */
int celsius;

int main() {
    printf("Ingrese los grados Celsius: ");
    scanf("%d", &celsius);
    printf("%d grados Celsius equivale a %d grados Fahrenheit.\n", celsius, (celsius*9/5+32));
    
    system ("pause");
    return 0;
}