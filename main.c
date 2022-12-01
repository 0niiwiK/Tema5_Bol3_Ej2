#include <stdio.h>
#define TAM 20

void concatenarCadenas(char *c1, char *c2, char *res);
void imprimirCadena(char *cad);
void pedirCadena(char *cad);

int main() {
    char cad1[20];
    char cad2[20];
    char cad_res[40];
    printf("Introduzca la cadena primera: ");
    pedirCadena(cad1);
    printf("Introduzca la cadena segunda: ");
    pedirCadena(cad2);
    concatenarCadenas(cad1,cad2,cad_res);
    imprimirCadena(cad_res);
    return 0;
}

void concatenarCadenas(char *c1, char *c2, char *res){
    char caracter_actual;
    int i=0, j=0;
    do {
        res[i]=c1[i];
        i++;
    } while (c1[i]!='\0');
    do {
        res[i]=c2[j];
        i++;
        j++;
    } while (c2[j]!='\0');
}

void imprimirCadena(char *cad){
    printf("\nNueva cadena: %s",cad);
}

void pedirCadena(char *cad){
    scanf("%[^\n]", cad);
    fflush(stdin);
}


