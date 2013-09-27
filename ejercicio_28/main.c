/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 27 de septiembre de 2013, 01:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Mismo enunciado al ejercicio anterior. Se pide: • Ingresar los datos en forma
 * aleatoria. (se pide ingreso de número de legajo de 1 a 100, se posiciona en
 * el elemento correspondiente y se ingresa edad y salario) • Calcular salario
 * promedio informando número de legajo de aquellos cuyo salario supere el promedio
 */
const int n = 100;
typedef struct empleado{
    int legajo, edad;
    float salario;
}empleado;

int main() {
    empleado empleados[n];
    int i, legajo;
    float promedio = 0;
    
    for(i = 0; i < sizeof(empleados)/sizeof(empleado); i++){
        do{
            printf("Ingrese numero de legajo (0 - %d): ", n-1);
            scanf("%d", &legajo);
        }while(!(legajo < n && legajo >= 0));
        empleados[legajo].legajo = legajo;
        
        printf("%s", "Ingrese edad: ");
        scanf("%d", &empleados[legajo].edad);
        
        printf("%s", "Ingrese salario: ");
        scanf("%f", &empleados[legajo].salario);
        promedio += empleados[legajo].salario;
        
        printf("\n");
    }
    promedio /= n;
    for(i = 0; i < sizeof(empleados)/sizeof(empleado); i++){
        if(promedio < empleados[i].salario){
            printf("Empleado legajo N %d supera el promedio salarial(%.2f) con un salario de %.2f\n", empleados[i].legajo, promedio, empleados[i].salario);
        }
    }
    
    system("pause");
}

