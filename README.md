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
    puts("1 - Obra 1");
    puts("2 - Obra 2");
    puts("3 - Obra 3");
    puts("4 - Obra 4");
    puts("5 - Todas as Obras");
    puts("6 - Sair");
    puts("_______________________________________________________");
    printf("opc: ");
}

void LimparTela(){
    char ent;
    puts("pressione qualquer tecla para continuar...");
    fflush(stdin);
    getchar();
    system("cls");
}
void exibirInterface(){
    puts("\nEscolha a forma de pagamento");
    puts("1 - Dinheiro");
    printf("opc: ");
}
