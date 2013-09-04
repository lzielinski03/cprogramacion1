/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 30 de agosto de 2013, 03:50 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Diseñar un algoritmo que permita calcular el promedio de un alumno sabiendo 
 * que se ingresa por alumno la nota de 6 materias y su nombre. 
 * No se sabe la cantidad de alumnos. Se pide mostrar: NOMBRE DEL ALUMNO: PROMEDIO:
 */
struct alumno{
    char nombre[30];
    float promedio;
};
char nom[30];
float nota, prom;
int i, count = 0;
struct alumno *alumnos;

void main() {
    alumnos = (struct alumno*)malloc ( sizeof(struct alumno) );
    do{
        alumnos = (struct alumno*)realloc (alumnos, ((count+1) * sizeof(struct alumno)) );
        prom = 0;
        printf("Ingrese el nombre del alumno, o terminar para salir.\n");
        scanf("%s", &nom);
        if(strcmp(nom, "terminar") != 0){
            strcpy(alumnos[count].nombre, nom);
            for(i = 0; i < 6; i++){
                printf("Ingrese nota: ");
                scanf("%f", &nota);
                prom += nota;
            }
            alumnos[count].promedio = prom / i;
            count++;
        }
        system("cls");
    }while(strcmp(nom, "terminar") != 0);
    system("cls");
    for(i = 0; i < count; i++){
        printf("NOMBRE DEL ALUMNO:\t%s\tPROMEDIO:\t%.2f\n", alumnos[i].nombre, alumnos[i].promedio);
    }
    system("pause");
}