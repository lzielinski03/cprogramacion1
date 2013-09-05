/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 5 de septiembre de 2013, 08:50 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Ídem al anterior agregando en el informe final nombre del empleado de mayor
 * salario con el monto del salario correspondiente y nombre del empleado de
 * menor salario con el monto del salario correspondiente 
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
    trabajadores *mayorSalario;
    trabajadores *menorSalario;
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
    mayorSalario = trabajadorInicio;
    menorSalario = trabajadorInicio;
    while (trabajadorFinal->next != 0) {
        if((mayorSalario->horas * mayorSalario->tarifa) < (trabajadorFinal->horas * trabajadorFinal->tarifa)){
            mayorSalario = trabajadorFinal;
        }
        if((menorSalario->horas * menorSalario->tarifa) > (trabajadorFinal->horas * trabajadorFinal->tarifa)){
            menorSalario = trabajadorFinal;
        }
        cantidadEmpleados++;
        printf("Nombre: %s\t\t\tSalario: $%.2f\n", trabajadorFinal->nombre, (trabajadorFinal->horas * trabajadorFinal->tarifa));
        trabajadorFinal = trabajadorFinal->next;
    }
    printf("\nCantidad de empleados facturados: %d\n\n", cantidadEmpleados);
    printf("mayorSalario: %s\t\t\tSalario: $%.2f\n", mayorSalario->nombre, mayorSalario->horas * mayorSalario->tarifa);
    printf("menorSalario: %s\t\t\tSalario: $%.2f\n", menorSalario->nombre, menorSalario->horas * menorSalario->tarifa);
    free(trabajadorInicio);
    free(trabajadorFinal);
    free(mayorSalario);
    free(menorSalario);
    system("pause");
}