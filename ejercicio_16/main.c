/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 4 de septiembre de 2013, 11:48 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Escribir un programa que calcule el salario semanal de cada trabajador de una
 * empresa dada la tarifa horaria y el número de horas trabajadas además del nombre.
 * Se debe permitir al usuario indicar cuando desea dejar de ingresar datos.
 */
void main() {

    char entrada[30];
    typedef struct trabajadores {
        char nombre[30];
        float tarifa;
        int horas;
        struct trabajadores *next;
    } trabajadores;
    trabajadores *trabajadorInicio = malloc(sizeof (trabajadores));
    trabajadores *trabajadorFinal = trabajadorInicio;
    trabajadorInicio->next = 0;

    do {
        printf("Ingresar nombre o salir: ");
        scanf("%s", &entrada);
        if (strcmp(entrada, "salir") != 0) {
            strcpy(trabajadorFinal->nombre, entrada);
            printf("Ingresar horas: ");
            scanf("%d", &trabajadorFinal->horas);
            printf("Ingresar tarifa: ");
            scanf("%f", &trabajadorFinal->tarifa);
            trabajadorFinal->next = malloc(sizeof (struct trabajadores));
            trabajadorFinal = trabajadorFinal->next;
            trabajadorFinal->next = 0;
        }
        system("cls");
    } while (strcmp(entrada, "salir") != 0);   
    free(trabajadorInicio);
    free(trabajadorFinal);
    system("pause");
}