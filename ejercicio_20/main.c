/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 5 de septiembre de 2013, 09:47 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * En un club se registran de uno en uno los siguientes datos de sus 
 * socios: Número de socio Apellido y nombre Edad Tipo de deporte que 
 * practica (1 tenis, 2 rugby, 3 voley, 4 hockey, 5 futbol) Diseñar en 
 * Pseudocódigo un algoritmo que permita emitir por pantalla cuantos socios
 * practican tenis y cuantos paddle y el promedio de edad de los jugadores
 * de cada deporte
 */
void main() {
    int i, entrada, edadPromedioDeporte[5] = {0, 0, 0, 0, 0}, cantidadPorDeporte[5] = {0, 0, 0, 0, 0};
    char deporte[6];
    typedef struct socios{
        int numeroSocio, edad, tipoDeporte;
        char apellido[30], nombre[30];
        struct socios *next;
    }socios;
    socios *socioInicio = malloc(sizeof(socios));
    socios *socioFin= socioInicio;
    socioInicio->next = 0;
    do{
        printf("Ingrese el Numero de socio o cero (0) para salir: ");
        scanf("%d", &entrada);
        if(entrada != 0){
            socioFin->numeroSocio = entrada;
            printf("apellido: ");
            scanf("%s", &socioFin->apellido);
            printf("nombre: ");
            scanf("%s", &socioFin->nombre);
            printf("edad: ");
            scanf("%d", &socioFin->edad);
            do{
                printf("Tipo de deporte (1 tenis, 2 rugby, 3 voley, 4 hockey, 5 futbol): ");
                scanf("%d", &socioFin->tipoDeporte);
            }while(!(socioFin->tipoDeporte > 0 && socioFin->tipoDeporte < 6));
            edadPromedioDeporte[socioFin->tipoDeporte] += socioFin->edad;
            cantidadPorDeporte[socioFin->tipoDeporte]++;
            socioFin->next = malloc(sizeof(socios));
            socioFin = socioFin->next;
            socioFin->next = 0;
            system("cls");
        }
    }while(entrada != 0);
    for (i = 1; i < (sizeof (edadPromedioDeporte) / sizeof (int))+1; i++) {
        switch (i) {
            case 1:
                printf("%s\n", "Tenis:");
                break;
            case 2:
                printf("%s\n", "Rugby:");
                break;
            case 3:
                printf("%s\n", "Voley:");
                break;
            case 4:
                printf("%s\n", "Hockey:");
                break;
            case 5:
                printf("%s\n", "Futbol:");
                break;
            default:
                break;
        }
        printf("\tEdad promedio: %d\n", (edadPromedioDeporte[i] != 0) ? (edadPromedioDeporte[i]/cantidadPorDeporte[i]) : 0);
        printf("\tCantidad de socios practicantes: %d\n", cantidadPorDeporte[i]);
    }
    free(socioInicio);
    free(socioFin);
    system("pause");
}

