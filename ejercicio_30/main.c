/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 2 de octubre de 2013, 09:08 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Una empresa de colectivos tiene 3 líneas de 12 coches cada una. Por cada
 * viaje el chofer entrega al llegar a la terminal una planilla con el número
 * de coche (de 1 a 12) , número de línea ( de 1 a 3) y la recaudación del
 * viaje. Las planillas se entregan sin ningún orden. Se pide informar por
 * pantalla: La recaudación total por línea de colectivo La recaudación total
 * por coche La recaudación total general
 */
void main() {

    float colectivos[3][12], importe, recaudacionLinea[3], recaudacionCoche[12], recaudacionGeneral = 0;
    int i, x, linea, continuar, coche;

    for (i = 0; i < 3; i++) {
        recaudacionLinea[i] = 0;
        for (x = 0; x < 12; x++){
            colectivos[i][x] = 0;
            recaudacionCoche[x] = 0;
        }
    }

    do {
        printf("Continuar? (Si = 1 | No = 0): ");
        scanf("%d", &continuar);
        if (continuar != 0) {
            printf("Ingresar linea ( 1 - 3): ");
            scanf("%d", &linea);

            printf("Ingresar coche ( 1 - 12): ");
            scanf("%d", &coche);
            
            printf("Ingresar recaudacion: ");
            scanf("%f", &importe);
            colectivos[linea-1][coche-1] += importe;
        }
    } while (continuar != 0);
    
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 12; x++){
            recaudacionLinea[i] += colectivos[i][x];
            recaudacionCoche[x] += colectivos[i][x];
            recaudacionGeneral += colectivos[i][x];
        }
    }
    
    printf("Recuadacion total: %.2f\n", recaudacionGeneral);
    printf("Recuadacion Linea 1: %.2f\n", recaudacionLinea[0]);
    printf("Recuadacion Linea 2: %.2f\n", recaudacionLinea[1]);
    printf("Recuadacion Linea 3: %.2f\n\n", recaudacionLinea[2]);
    for (x = 0; x < 12; x++){
        printf("Recuadacion Coche %d: %.2f\n", x+1, recaudacionCoche[x]);
    }

    system("pause");
}

