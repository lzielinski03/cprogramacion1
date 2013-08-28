/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 22 de agosto de 2013, 08:52 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * De los alumnos de una escuela se registra su apellido y nombre y su altura. 
 * Diseñar en Pseudocódigo un algoritmo que indique el nombre del alumno más alto y su altura (sólo uno es el más alto).
 */

struct alumno{
    char nombre[30];
    float altura;
};
struct alumno alumnoX;
char nombre2[30];
float altura2;
int x = 0;

int main() {
    alumnoX.altura = 0;
    printf("Ingresar apellido y nombre o -1 para salir: ");
    scanf("%s", &nombre2);
    
    while(strcmp(nombre2, "-1") != 0){
         if(x != 0){
             printf("Ingresar apellido y nombre o -1 para salir: ");
             scanf("%s", &nombre2);
         }else
             x = 1;
         
         if(strcmp(nombre2, "-1") == 0)
             break;
         printf("Ingresar altura: ");
         scanf("%f", &altura2);
          
         if(altura2 > alumnoX.altura){
             alumnoX.altura = altura2;
             strcpy(alumnoX.nombre, nombre2);
         }
    }
    if(x != 0)
        printf("El alumno %s es el mas alto, con una altura de %.2f\n", alumnoX.nombre, alumnoX.altura);
    
    system("pause");
    return 0;
}