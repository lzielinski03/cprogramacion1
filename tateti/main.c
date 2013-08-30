/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 27 de agosto de 2013, 08:20 AM
 */

#include <stdio.h>
#include <stdlib.h>
int columna, fila, i = 0, x, j, z, count11, count12, count21, count22, count31, count32;
char posicion[3][3];
void drawTable();
void jugar(int p);
int checkWinner();
/*
 * 
 */
void main() {
    while(checkWinner() == 3 && i < 8){
        jugar(i);
        i++;
    }
    
    system("pause");
}
void drawTable(){
    

    printf("\n\n                 0          1         2    \n");
    printf("\t    ________________________________\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t0   |    %c    |    %c     |    %c    |\n", posicion[0][0], posicion[0][1], posicion[0][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t1   |    %c    |    %c     |    %c    |\n", posicion[1][0], posicion[1][1], posicion[1][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t2   |    %c    |    %c     |    %c    |\n", posicion[2][0], posicion[2][1], posicion[2][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");


}

void drawTable2(){
    printf("\t\t   -----------\n");
    printf("\n\t\t    0   1   2  \n");
    printf("\n\t\t0   %c | %c | %c  \n", posicion[0][0], posicion[0][1], posicion[0][2]);
    printf("\t\t   -----------\n");
    printf("\t\t1   %c | %c | %c  \n", posicion[1][0], posicion[1][1], posicion[1][2]);
    printf("\t\t   -----------\n");
    printf("\t\t2   %c | %c | %c  \n", posicion[2][0], posicion[2][1], posicion[2][2]);
}

void jugar(int p){
        do{
            system("cls");
            drawTable();
           if(p%2 == 0){
                system("Color f0");
                printf("Juega cruz\n");
            }else{
                system("Color 07");
                printf("Juega cara\n");
            }
    
        printf("\tIngresar fila: ");
        scanf("%d", &fila);
   
        printf("\tIngresar columna: ");
        scanf("%d", &columna);   

    }while(posicion[fila][columna] == 'X' || posicion[fila][columna] == '0');
    
    if(p%2 == 0)
        posicion[fila][columna] = 'X';
    else
        posicion[fila][columna] = 'O';
    system("cls");
}

int checkWinner(){
    for(x = 0; x < 3; x++){
        count11 = 0;
        count12 = 0;
        count21 = 0;
        count22 = 0;
        count31 = 0;
        count32 = 0;
        for(j = 0; j < 3; j++){
            if(posicion[x][j] == 'X')
                count11++;
            else if(posicion[x][j] == '0')
                count12++;
            
            if(posicion[j][x] == 'X')
                count21++;
            else if(posicion[j][x] == '0')
                count22++;
            
            if(posicion[j][j] == 'X')
                count31++;
            else if(posicion[j][j] == '0')
                count32++;
        }
        
        if(count11 == 3 || count21 == 3 || count31 == 3){
            drawTable();
            printf("We have a winner!: cruz\n");
            return 0;
        }
        if(count12 == 3 || count22 == 3 || count32 == 3){
            drawTable();
            printf("We have a winner!: cara\n");
            return 1;
        }
        if(posicion[0][2] == 'X' && posicion[1][1] == 'X' && posicion[2][0] == 'X'){
            drawTable();
            printf("We have a winner!: cruz\n");
            return 0;
        }
        if(posicion[0][2] == '0' && posicion[1][1] == '0' && posicion[2][0] == '0'){
            drawTable();
            printf("We have a winner!: cara\n");
            return 0;
        }
    }
    return 3;
}