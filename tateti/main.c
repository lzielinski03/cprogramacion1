/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 27 de agosto de 2013, 08:20 AM
 */

#include <stdio.h>
#include <stdlib.h>
int columna, fila, ubicacion, i = 0, x, j, z, count11, count12, count21, count22, count31, count32, count[3][3];
char posicions[3][3];
char posicion[9];
void drawTable();
void drawTable2();
void jugar(int p);
void jugar2(int p);
int checkWinner();
int checkWinner2();

/*
 * 
 */
void main() {
    while (checkWinner() == 3 && i < 8) {
        jugar(i);
        i++;
    }

    system("pause");
}

void drawTable() {
    printf("  ________________________________\t________________________________\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    1    |    2     |    3    |\t|    %c    |    %c     |    %c    |\n", posicion[0], posicion[1], posicion[2]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    4    |    5     |    6    |\t|    %c    |    %c     |    %c    |\n", posicion[3], posicion[4], posicion[5]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    7    |    8     |    9    |\t|    %c    |    %c     |    %c    |\n", posicion[6], posicion[7], posicion[8]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
}

void drawTable2() {

    printf("\n\n                 0          1         2    \n");
    printf("\t    ________________________________\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t0   |    %c    |    %c     |    %c    |\n", posicions[0][0], posicions[0][1], posicions[0][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t1   |    %c    |    %c     |    %c    |\n", posicions[1][0], posicions[1][1], posicions[1][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");
    printf("\t    |         |          |         |\n");
    printf("\t    |         |          |         |\n");
    printf("\t2   |    %c    |    %c     |    %c    |\n", posicions[2][0], posicions[2][1], posicions[2][2]);
    printf("\t    |         |          |         |\n");
    printf("\t    |_________|__________|_________|\n");
}

void jugar(int p) {
    do {
        system("cls");
        drawTable();
        if (p % 2 == 0) {
            system("Color f0");
            printf("Juega cruz\n");
        } else {
            system("Color 07");
            printf("Juega cara\n");
        }
        printf("\tIngresar posicion: ");
        scanf("%d", &ubicacion);
        ubicacion--;
    } while (posicion[ubicacion] == 'X' || posicion[ubicacion] == '0');

    if (p % 2 == 0)
        posicion[ubicacion] = 'X';
    else
        posicion[ubicacion] = 'O';
    system("cls");
}

void jugar2(int p) {
    do {
        system("cls");
        drawTable();
        if (p % 2 == 0) {
            system("Color f0");
            printf("Juega cruz\n");
        } else {
            system("Color 07");
            printf("Juega cara\n");
        }

        printf("\tIngresar fila: ");
        scanf("%d", &fila);

        printf("\tIngresar columna: ");
        scanf("%d", &columna);

    } while (posicions[fila][columna] == 'X' || posicions[fila][columna] == '0');

    if (p % 2 == 0)
        posicions[fila][columna] = 'X';
    else
        posicions[fila][columna] = 'O';
    system("cls");
}

int checkWinner() {
    for (x = 0; x <= 2; x++) {
        for (j = 0; j <= 2; j++) {
            count[x][j] = 0;
            if (posicion[j + x * 3] == 'X') {
                count[x][j]++;
                printf("x: %d\tj: %d\tv: %d!!!!!!!!!!!\n", x, j, count[x][j]);
            }

            /*
        if (posicion[j + x * 3] == 'O')
            count[x][j]++;*/
        }/*
        for (j = 0; j <= 2; j++) {
            if (posicion[j * 3 + x] == 'X')
                count[x][j]++;
            if (posicion[j * 3 + x] == 'O')
                count[x][j]++;
        }
        if (count[x][j] == 3) {
            printf("We have a winner!: cruz\n");
            return 0;
        }
        /*
        if (count[1][x] == 3) {
            printf("We have a winner!: cara\n");
            return 0;
        }
        if (count[0][1] == 3) {
            printf("We have a winner!: cruz\n");
            return 0;
        }
        if (count[1][1] == 3) {
            printf("We have a winner!: cara\n");
            return 0;
        }*/
    }
    for (x = 0; x <= 2; x++) {
        for (j = 0; j <= 2; j++) {
            printf("x: %d\tj: %d\tv: %d\n", x, j, count[x][j]);
        }
    }
    system("pause");
    return 3;
}

int checkWinner2() {
    for (x = 0; x < 3; x++) {
        count11 = 0;
        count12 = 0;
        count21 = 0;
        count22 = 0;
        count31 = 0;
        count32 = 0;
        for (j = 0; j < 3; j++) {
            if (posicions[x][j] == 'X')
                count11++;
            else if (posicions[x][j] == '0')
                count12++;

            if (posicions[j][x] == 'X')
                count21++;
            else if (posicions[j][x] == '0')
                count22++;

            if (posicions[j][j] == 'X')
                count31++;
            else if (posicions[j][j] == '0')
                count32++;
        }

        if (count11 == 3 || count21 == 3 || count31 == 3) {
            drawTable();
            printf("We have a winner!: cruz\n");
            return 0;
        }
        if (count12 == 3 || count22 == 3 || count32 == 3) {
            drawTable();
            printf("We have a winner!: cara\n");
            return 1;
        }
        if (posicions[0][2] == 'X' && posicions[1][1] == 'X' && posicions[2][0] == 'X') {
            drawTable();
            printf("We have a winner!: cruz\n");
            return 0;
        }
        if (posicions[0][2] == '0' && posicions[1][1] == '0' && posicions[2][0] == '0') {
            drawTable();
            printf("We have a winner!: cara\n");
            return 0;
        }
    }
    return 3;
}