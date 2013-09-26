/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 10:27 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Leer dos vectores A y B de dimensión 10. Generar un tercer vector C de 100 
 * elementos donde la componente C[ i ] sea igual al mínimo valor 
 * de A[ i ] y B[ i ]. Mostrar los tres vectores
 */
void main() {
    srand(time(NULL)); 
    int a[10], b[10] = {}, c[100], i;
    for(i = 0; i < sizeof(a)/sizeof(int); i++){
        a[i] = rand()%101;
        b[i] = rand()%101;
        c[i] = (a[i] < b[i]) ? a[i] : b[i];
        printf("%d\tA: %d\tB: %d\tC: %d\n", i, a[i], b[i], c[i]);
    }
    system("pause");
}