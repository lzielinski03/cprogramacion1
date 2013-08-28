/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 11:05 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * De 10 números ingresados indicar cuantos son mayores a cero y cuantos son menores a cero.
 */
int i;
int numero = 0;
int countMayor = 0;
int countMenor = 0;

int main() {

    for(i = 0; i < 10;i++){
        printf("%d. Ingresar numero: ",i+1);
        scanf("%d", &numero);
        if(numero > 0){
            countMayor++; 
        }else if(numero < 0){
            countMenor++; 
        }
    }
    printf("Numeros ingresados mayores a cero: %d.\n", countMayor);
    printf("Numeros ingresados menores a cero: %d.\n", countMenor);
    
    system ("pause");
    return 0;
}

