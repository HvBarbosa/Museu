#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Ingresso.h"
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
        Ingresso ingrs;
        switch (opc) {
            case 1:
                comprarIngressos(ingressos);
                break;
            case 2:
                printIngresso2(ingressos, ticket);
                break;
            case 3:
                salvarDadosIngressos(ingressos, ticket);
                break;
            case 4:
                carregarDadosIngressos(ingressos, &ticket);
                break;
                return 0;
            default:
                puts("Opção inexistente, tente novamente!");
        }
    } while (TRUE);
}
