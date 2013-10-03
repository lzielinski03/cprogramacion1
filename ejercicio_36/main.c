/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 2 de octubre de 2013, 10:09 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Generar un programa que me permita cargar la información de 100 empleados.
 * La información que se carga es la siguiente: nombre dirección ( calle,
 * número, localidad ) edad sexo (M = masculino, F = femenino) Se pide:
 * a) listar los empleados menores de 25 años 
 * b) listar los empleados que viven en Avellaneda 
 * c) listar los empleados que viven en Avellaneda menores de 25 años 
 * d) ordenar el vector por nombre y listarlo
 */

typedef struct Direccion {
    char calle[30], localidad[15];
    int numero;
} Direccion;

typedef struct Empleado {
    char nombre[20], sexo;
    int edad;
    Direccion direccion;
} Empleado;

void main() {
    int i, x, count;
    Empleado empleados[100];
    Empleado aux;

    for (i = 0; i < sizeof (empleados) / sizeof (Empleado); i++) {
        printf("Nombre: ");
        scanf("%s", &empleados[i].nombre);
        printf("Direccion - calle: ");
        scanf("%s", &empleados[i].direccion.calle);
        printf("Direccion - numero: ");
        scanf("%d", &empleados[i].direccion.numero);
        printf("Direccion - localidad: ");
        scanf("%s", &empleados[i].direccion.localidad);
        printf("Edad: ");
        scanf("%d", &empleados[i].edad);
        printf("Sexo(M = masculino, F = femenino): ");
        scanf("%s", &empleados[i].sexo);
    }
    system("cls");

    printf("\nMayores a 25 anios\n");
    for (i = 0; i < sizeof (empleados) / sizeof (Empleado); i++) {
        if (empleados[i].edad > 25) {
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Direccion - calle: %s\n", empleados[i].direccion.calle);
            printf("Direccion - numero: %d\n", empleados[i].direccion.numero);
            printf("Direccion - localidad: %s\n", empleados[i].direccion.localidad);
            printf("Edad: %d\n", empleados[i].edad);
            printf("Sexo: %c\n\n", empleados[i].sexo);
        }
    }
    printf("\nViven en Avellaneda\n");
    for (i = 0; i < sizeof (empleados) / sizeof (Empleado); i++) {
        if (strcmp(empleados[i].direccion.localidad, "Avellaneda") == 0) {
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Direccion - calle: %s\n", empleados[i].direccion.calle);
            printf("Direccion - numero: %d\n", empleados[i].direccion.numero);
            printf("Direccion - localidad: %s\n", empleados[i].direccion.localidad);
            printf("Edad: %d\n", empleados[i].edad);
            printf("Sexo: %c\n\n", empleados[i].sexo);
        }
    }
    printf("\nMenores de 25 anios que viven en Avellaneda\n");
    for (i = 0; i < sizeof (empleados) / sizeof (Empleado); i++) {
        if (strcmp(empleados[i].direccion.localidad, "Avellaneda") == 0 && empleados[i].edad < 25) {
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Direccion - calle: %s\n", empleados[i].direccion.calle);
            printf("Direccion - numero: %d\n", empleados[i].direccion.numero);
            printf("Direccion - localidad: %s\n", empleados[i].direccion.localidad);
            printf("Edad: %d\n", empleados[i].edad);
            printf("Sexo: %c\n\n", empleados[i].sexo);
        }
    }

    for (i = 0; i < sizeof (empleados) / sizeof (Empleado) - 1; i++) {
        for (x = 0; i < sizeof (empleados) / sizeof (Empleado) - 1; i++) {
            count = 0;
            while ((empleados[x].nombre[count] == empleados[x + 1].nombre[count]) && empleados[i].nombre[count] != NULL && empleados[i + 1].nombre[count] != NULL) {
                count++;
            }
            if (empleados[x].nombre[count] > empleados[x + 1].nombre[count]) {
                aux = empleados[x + 1];
                empleados[x + 1] = empleados[x];
                empleados[x] = aux;
            }
        }
    }

    printf("\nOrdenados\n");
    for (i = 0; i < sizeof (empleados) / sizeof (Empleado); i++) {
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Direccion - calle: %s\n", empleados[i].direccion.calle);
        printf("Direccion - numero: %d\n", empleados[i].direccion.numero);
        printf("Direccion - localidad: %s\n", empleados[i].direccion.localidad);
        printf("Edad: %d\n", empleados[i].edad);
        printf("Sexo: %c\n\n", empleados[i].sexo);

    }
    system("pause");
}