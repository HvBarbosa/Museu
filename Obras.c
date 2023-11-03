#include <stdio.h>

void imprimirCabecalho(){
    puts("********************************************");
    puts("*                                          *");
    puts("*                 SISTEMA                  *");
    puts("*                   DE                     *");
    puts("*                 COMPRA                   *");
    puts("*                INGRESSOS                 *");
    puts("*                                          *");
    puts("*                                          *");
    puts("*                       MUSEU-MULTITEMATICO*");
    puts("********************************************");
}

void exibirMenu(){
    puts("\nEscolha uma obra desejada:");
    puts("1 - Comprar Ingressos");
    puts("2 - Imprimir registros de compra");
    puts("3 - Salvar dados da compra");
    puts("4 - Carregar dados do Ingresso");
    puts("5 - Sair");
    puts("___________________");
    printf("opc: ");
}

void limparBuffer(){
    fflush(stdin);
    getchar();
}

void LimparTela(){
    char ent;
    puts("pressione qualquer tecla para continuar...");
    fflush(stdin);
    getchar();
    system("cls");
}


