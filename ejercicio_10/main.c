/* 
 * File:   main.c
 * Author: lzielinski
 *
 * Created on 21 de agosto de 2013, 12:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escribir en Pseudocódigo  y codificar en C un programa que lea  20 caracteres. 
 * Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
 */
char caracteres[20];
int x = 0;
int a = 0, e = 0, i = 0, o = 0, u = 0, vocales = 0;

int main() {
    printf("Ingresar palabra: ");
    scanf("%[^\n]%*c", &caracteres);
    while(caracteres[x] != '\0'){
        switch(caracteres[x]){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            default:
                if(caracteres[x] == ' ')
                    break;
                vocales++;
                break;
        }
        x++;
    }
    printf("Cantidad de letras A: %d\n", a);
    printf("Cantidad de letras E: %d\n", e);
    printf("Cantidad de letras I: %d\n", i);
    printf("Cantidad de letras O: %d\n", o);
    printf("Cantidad de letras U: %d\n", u);
    printf("Cantidad de vocales: %d\n", vocales);
    printf("Cantidad de caracteres: %d\n", x);
    
    system ("pause");
    return 0;
}