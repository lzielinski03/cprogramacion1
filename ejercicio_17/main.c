/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 5 de septiembre de 2013, 08:26 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Ídem al anterior pero informando al finalizar (el ingreso de datos y los
 * cálculos correspondientes) la cantidad de empleados a los que se les calculó
 * el salario.
 */
void main() {

    int cantidadEmpleados = 0;
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
    trabajadorFinal = trabajadorInicio;
    while (trabajadorFinal->next != 0) {
        cantidadEmpleados++;
        printf("Nombre: %s\t\tSalario: $%.2f\n", trabajadorFinal->nombre, (trabajadorFinal->horas * trabajadorFinal->tarifa));
        trabajadorFinal = trabajadorFinal->next;
    }
    printf("Cantidad de empleados facturados: %d\n", cantidadEmpleados);
    free(trabajadorInicio);
    free(trabajadorFinal);
    system("pause");
}