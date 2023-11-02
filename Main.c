#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ingressos.h"
#include "Obras.h"

#define MAX 1000
#define TRUE 1
#define FALSE 0

int main() {
    setlocale(LC_ALL, "");

    Ingresso ingressos[MAX];
    int ticket = 0;
    char obra[30];
    int opc;

    do {
        imprimirCabecalho();
        exibirMenu();
        scanf("%d", &opc); 
        switch (opc) {
            case 1: 
                break;
            case 2: 
                break;
            case 3: 
                break;
            case 4: 
                return 0;
            default:
                puts("Opção inexistente, tente novamente!");
        }
    } while (TRUE);
}
