#include <stdio.h>

void imprimirCabecalho(){
    puts("********************************************");
    puts("*                                          *");
    puts("*                 SysMuseu                 *");
    puts("*                                          *");
    puts("*                                ADS - UNIP*");
    puts("********************************************");
}

void exibirMenu(){
    puts("\nEscolha uma obra desejada:");
    puts("1 - 150 anos de Santos Dumont");
    puts("2 - 100 ANOS DA ARTE MODERNA");
    puts("3 - INTELIGÊNCIA ARTIFICIAL (IA)");
    puts("4 - JOGOS OLÍMPICOS 2024");
    puts("5 - Todas as Obras");
    puts("6 - Sair");
    puts("_______________________________________________________");
    printf("opc: ");
}

void limparBuffer(){
    fflush(stdin);
}

void LimparTela(){
    char ent;
    puts("pressione qualquer tecla para continuar...");
    fflush(stdin);
    getchar();
    system("cls");
}

