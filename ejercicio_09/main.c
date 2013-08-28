/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 12:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente 
 * a pies (enteros) y pulgadas (decimal), dando las pulgadas con una precisión 
 * de 1 lugar decimal. Considerar 2.54 cm por pulgada y 12 pulgadas por pie. 
 * La salida podrá ser: 333.3 cm son 10 pies y 11.2 pulgadas. ( 333.3 centimetros equivale a 131.22 pulgadas)
 */
float centimetros;
int pies;

int main() {
    printf("Ingresar los centimetros a calcular: ");
    scanf("%f", &centimetros);
    pies = centimetros*0.032808399;
    printf("%.1f centimetros equivale a %d pies y %.1f pulgadas.\n", centimetros, pies, (centimetros*0.393700787));
    
    system ("pause");
    return 0;
}

