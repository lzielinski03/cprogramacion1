/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 4 de septiembre de 2013, 09:07 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * De las 20 participantes de un concurso de belleza se van registrando de uno en uno los
 * siguientes datos: Apellido y Nombre Puntos por inteligencia Puntos por Cultura general
 * Puntos por Belleza Se necesita informar por pantalla: • Apellido y nombre de la
 * concursante de mayor puntaje general • Puntaje acumulado por todas las participantes
 * en Cultura general, en Inteligencia y en Belleza • De los tres puntajes acumulados en
 * el ítem anterior cual fue el menor
 */

void main() {
    
    // Declaraciones
    typedef struct Participantes{
        char apellido[30], nombre[30];
        int puntosInt, puntosCtr, puntosBelle;
    }Participantes;
    const int n = 20;
    int i, sumInt = 0, sumCtr = 0, sumBelle = 0, promedio, mayorPromedio;
    Participantes participante[n];
        
    // Cuerpo
    for(i = 0; i < n; i++){
        printf("Ingrese el nombre del participante N %d: ", i);
        scanf("%s", &participante[i].nombre);
        printf("Ingrese el apellido del participante N %d: ", i);
        scanf("%s", &participante[i].apellido);
        printf("Ingrese los puntos de inteligencia del participante N %d: ", i);
        scanf("%d", &participante[i].puntosInt);
        printf("Ingrese los puntos de cultura del participante N %d: ", i);
        scanf("%d", &participante[i].puntosCtr);
        printf("Ingrese los puntos de belleza del participante N %d: ", i);
        scanf("%d", &participante[i].puntosBelle);
        system("cls");
        
        if( i == 0){
            promedio = participante[i].puntosInt + participante[i].puntosCtr + participante[i].puntosBelle;
            mayorPromedio = i;
        }
        if( promedio < (participante[i].puntosInt + participante[i].puntosCtr + participante[i].puntosBelle)){
            promedio = participante[i].puntosInt + participante[i].puntosCtr + participante[i].puntosBelle;
            mayorPromedio = i;
        }
        sumInt += participante[i].puntosInt;
        sumCtr += participante[i].puntosCtr;
        sumBelle += participante[i].puntosBelle;
    }
    printf("Concursante de mayor puntaje general: %s %s\n", participante[mayorPromedio].nombre, participante[mayorPromedio].apellido);
    printf("Puntaje acumulado por Inteligencia:\t%d\n", sumInt);
    printf("Puntaje acumulado por Cultura:\t%d\n", sumCtr);
    printf("Puntaje acumulado por Belleza:\t%d\n", sumBelle);

    if(sumInt < sumCtr){
        if(sumInt < sumBelle)
            printf("Puntaje acumulado menor fue Inteligencia\n");
        else
            printf("Puntaje acumulado menor fue Belleza\n");
    }else{
        if(sumCtr < sumBelle)
            printf("Puntaje acumulado menor fue Cultura\n");
        else{
            printf("Puntaje acumulado menor fue Belleza\n");
        }
    }
    system("pause");
}