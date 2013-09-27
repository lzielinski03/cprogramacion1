/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 26 de septiembre de 2013, 10:51 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * De los 100 empleados de una fábrica se registra: número de legajo (coincide
 * con el número de índice), edad y salario. Se pide: • Ingresar los datos
 * correlativamente • Calcular la edad promedio informando número de legajo de
 * los empleados cuya edad supere el promedio
 */

typedef struct empleado{
    int legajo, edad;
    float salario;
}empleado;
const int n = 3;
void main() {
    empleado empleados[n];
    int i, edad, legajo[n], promedio = 0;
    float salario;
    
    for(i = 0; i < sizeof(empleados)/sizeof(empleado); i++){
        do{
            printf("Ingrese numero de legajo (0 - %d): ", n-1);
            scanf("%d", &legajo[i]);
        }while(!(legajo[i] < n && legajo[i] >= 0));
        empleados[legajo[i]].legajo = legajo[i];
        
        printf("%s", "Ingrese edad: ");
        scanf("%d", &edad);
        empleados[legajo[i]].edad = edad;
        promedio += empleados[legajo[i]].edad;
        
        printf("%s", "Ingrese salario: ");
        scanf("%f", &salario);
        empleados[legajo[i]].salario = salario;
        printf("\n");
    }
    promedio /= n;
    for(i = 0; i < sizeof(empleados)/sizeof(empleado); i++){
        if(promedio < empleados[legajo[i]].edad){
            printf("Empleado legajo N %d supera el promedio de edad(%d) con %d anios de edad\n", empleados[legajo[i]].legajo, promedio, empleados[legajo[i]].edad);
        }
    }
    system("pause");
}