/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 27 de agosto de 2013, 08:20 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int ubicacion, i = 0, x, j, count[2][4][3];
char posicion[9], name1[15], name2[15], caracteres[100];
void drawTable();
void jugar(int p);
int checkWinner();
FILE *scores;
time_t comienzo, final;
struct tm *tm;

void main() {
    comienzo = time(NULL);
    tm = localtime(&comienzo);
    scores = scores = fopen("C:\\scores.txt", "a+");
    printf("Ingrese el nombre del participante Cruz: ");
    scanf("%s", &name1);
    printf("Ingrese el nombre del participante Cara: ");
    scanf("%s", &name2);
    fprintf(scores, "%02d-%02d-%04d\t%s\t\tVS\t%s", tm->tm_mday, tm->tm_mon + 1, tm->tm_year + 1900, name1, name2);
    while (checkWinner() == 3 && i < 9) {
        jugar(i);
        i++;
    }
    if(checkWinner() == 3){
        x = 0;
        strcpy(name1, "Empate");
    }else
        x = (i - 1) % 2;
    final = time(NULL);
    printf("%.2f\t%.2f\t%.2f\n", difftime(final, comienzo), final, comienzo);
    fprintf(scores, "\t\t%.f seg\t%s\n", difftime(final, comienzo), (x == 0) ? name1 : name2);
    fclose(scores);
    printf("Ver historial de batallas? (Yes = 1)(No = 0)");
    scanf("%d", &x);
    if (x == 1) {
        scores = scores = fopen("C:\\scores.txt", "r");
        printf("FECHA\t\tJUGADOR1\tVS\tJUGADOR2\tDURACION\tGANADOR\n");
        while (!feof(scores)) {
            fgets(caracteres, 100, scores);
            printf("%s", caracteres);
        }
        fclose(scores);
    }
    system("pause");
}

void drawTable() {
    printf("  ________________________________\t________________________________\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    7    |    8     |    9    |\t|    %c    |    %c     |    %c    |\n", posicion[6], posicion[7], posicion[8]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    4    |    5     |    6    |\t|    %c    |    %c     |    %c    |\n", posicion[3], posicion[4], posicion[5]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |    1    |    2     |    3    |\t|    %c    |    %c     |    %c    |\n", posicion[0], posicion[1], posicion[2]);
    printf("  |         |          |         |\t|         |          |         |\n");
    printf("  |_________|__________|_________|\t|_________|__________|_________|\n");
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
}

int checkWinner() {
    for (x = 0; x <= 2; x++) {
        for (j = 0; j <= 3; j++) {
            count[0][j][x] = 0;
            count[1][j][x] = 0;
        }
        for (j = 0; j <= 2; j++) {
            if (posicion[j + x * 3] == 'X')
                count[0][0][x]++;
            if (posicion[j + x * 3] == 'O')
                count[1][0][x]++;
            if (posicion[j * 3 + x] == 'X')
                count[0][1][x]++;
            if (posicion[j * 3 + x] == 'O')
                count[1][1][x]++;
            if (posicion[j * 4] == 'X')
                count[0][2][x]++;
            if (posicion[j * 4] == 'O')
                count[1][2][x]++;
            if (posicion[j + 6 - (j * 3)] == 'X')
                count[0][3][x]++;
            if (posicion[j + 6 - (j * 3)] == 'O')
                count[1][3][x]++;
        }
        for (j = 0; j <= 3; j++) {
            if (count[0][j][x] == 3) {
                system("cls");
                drawTable();
                printf("We have a winner!: cruz\n");
                return 0;
            }
            if (count[1][j][x] == 3) {
                system("cls");
                drawTable();
                printf("We have a winner!: cara\n");
                return 1;
            }
        }
    }
    return 3;
}