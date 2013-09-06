/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 6 de septiembre de 2013, 09:17 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Una persona desea saber en qué día del mes realizó más gastos en compras,
 * para ello ingresa por teclado día a día lo que gastó por día, cargando un
 * vector definido en memoria. Puede haber varias o ninguna compra para un
 * determinado día. Informar cual fue el día de mayor gasto.
 */
void main() {
    int diasDelMes[30], i, entrada, mayorGasto = 0, dia;
    
    for(i = 0; i < (sizeof(diasDelMes)/sizeof(int)); i++){
        diasDelMes[i] = 0;
        do{
            printf("Sumar gastos al dia %i (cero para terminar dia): ", i+1);
            scanf("%d", &entrada);
            if(entrada > 0)
                diasDelMes[i] += entrada;
        }while(entrada > 0);
        if(diasDelMes[i] > mayorGasto){
            mayorGasto = diasDelMes[i];
            dia = i;
        }
    }
    printf("\nEl dia de mayor gasto fue: %d\n", dia+1);
    system("pause");
}

