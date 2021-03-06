/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 4 de septiembre de 2013, 08:19 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Del registro de partes meteorológico por cada día se registra la fecha,
 * temperatura máxima y temperatura mínima. Diseñar en Pseudocódigo un
 * algoritmo que permita informar: • el día más frío y cual fue esa
 * temperatura • el día más cálido y cual fue esa temperatura
 */
void main() {
    
    int max, min, tempMax, tempMin, f = 0;
    char fecha[10], maxFecha[10], minFecha[10];

        do{
        printf("Ingresar fecha: (DD/MM/AA) o salir\n");  
        scanf("%s", &fecha);
        if(strcmp(fecha, "salir") != 0){
            printf("Ingresar temperatura maxima: ");  
            scanf("%d", &max);
            printf("Ingresar temperatura minima: ");  
            scanf("%d", &min);
            if(f == 0){
                tempMax = max;
                tempMin = min;
                strcpy(maxFecha, fecha);
                strcpy(minFecha, fecha); 
                f = 1;
            }
        }
        if(max > tempMax){
            tempMax = max;
            strcpy(maxFecha, fecha); 
        }
        if(min < tempMin){
            tempMin = min;
            strcpy(minFecha, fecha); 
        }
        system("cls");
    }while(strcmp(fecha, "salir") != 0);
    
    printf("La fecha con la temperatura mayor fue %s, con una temperatura de : %d\n", maxFecha, tempMax);
    printf("La fecha con la temperatura menor fue %s, con una temperatura de : %d\n", minFecha, tempMin);
    
    system("PAUSE");
}