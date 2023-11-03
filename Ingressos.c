#include <stdio.h>

#define INTEIRA 1
#define MEIA 2
#define MEIA_SOCIAL 3
#define INATIVO 4

struct data{

    int data;
    int mes;
    int ano;
};
    typedef struct data Data;

    struct Ingresso {
    char nome[20];
    char obra[30];
    int ticket;
    int tipo;
    Data dtIngresso;
    float hora;
};
typedef struct Ingresso Ingresso;

void comprarIngressos(Ingresso Ingressos[]){
    Ingresso igrs;

    puts("\nEscolha uma obra desejada:");
    puts("1 - 150 anos de Santos Dumont");
    puts("2 - 100 ANOS DA ARTE MODERNA");
    puts("3 - INTELIGÊNCIA ARTIFICIAL (IA)");
    puts("4 - JOGOS OLÍMPICOS 2024");
    puts("5 - Todas as Obras");
    puts("6 - Sair");
    puts("___________________");
    printf("opc: ");
    int tipo;
    scanf("%d",&tipo);

    while(tipo < 1 || tipo > 3){
        puts("Tipo de ingresso: 1 - Inteiro 2 - Meia 3 - Meia Social");
        scanf("%d",&tipo);
    }
    int numIngresso;
    printf("Digite a quantidade de ingressos desejada: ");
    scanf("%d", &numIngresso);

    float valorTotal = 0.0;

    if(tipo == 1){
        valorTotal = 40.0 * numIngresso;
    }else if(tipo == 2){
        valorTotal = 20.0 * numIngresso;
    }

    char pagamento [30];

    int formaPagamento;
    puts("Escolha a forma de pagamento:");
    puts("1 - Dinheiro");
    puts("2 - Cartão de Crédito");
    puts("3 - Cartão de Débito");
    puts("4 - Pix");
    printf("Escolha a forma de pagamento (1-4): ");
    scanf("%d", &formaPagamento);

    printf("Valor total da compra: R$%.2f\n", valorTotal);
}

void printIngresso(Ingresso ingrs) {
    puts("-----------------------");
    printf("ID: %d\n", ingrs.ticket);
    printf("Nome: %s\n", ingrs.nome);
    printf("Data de compra: %d/%d/%d\n", ingrs.dtIngresso.data, ingrs.dtIngresso.mes, ingrs.dtIngresso.ano);
    printf("\n");
    puts("-----------------------");
}

void printIngresso2(Ingresso ingressos[], int ticket){
    Ingresso ingrs;
    puts("Imprimindo registros de compras...");
    for(int i=0; i<ticket; i++){
            ingrs = ingressos[i];
            printIngresso(ingrs);
    }
}

void salvarDadosIngressos(Ingresso ingressos[], int ticket){
    FILE *fp;
    fp = fopen("Ingressos.txt", "w");
    puts("Salvando dados em arquivos...");
    fprintf(fp,"%d\n", ticket);

    for(int i=0; i<ticket; i++){
        Ingresso ingrs;
        ingrs = ingressos[i];
        fprintf(fp,"%s\n",ingrs.nome);
        fprintf(fp,"%d/%d/%d\n",ingrs.dtIngresso.data,ingrs.dtIngresso.mes,ingrs.dtIngresso.ano);
        fprintf(fp,"%d %d\n",ingrs.ticket, ingrs.tipo);
    }
    puts("Dados foram salvos com sucesso!");
    fclose(fp);
}

void carregarDadosIngressos(Ingresso ingressos[],int *pid){
    FILE *fp;
    fp = fopen("Ingressos.txt","r");
    if (fp != NULL){
        puts("Carregando dados do arquivo...");
        puts("Lendo informação de ticket...");
        int ticket;
        fscanf(fp,"%d\n",&ticket);
        *pid = ticket;
        puts("Lendo dados de compras de Ingressos...");
        int qtd = 0;
        while(!feof(fp)){
                Ingresso ingrs;
                fscanf(fp,"%[^\n]s",ingrs.nome);
                fscanf(fp,"%d/%d/%d\n",&ingrs.dtIngresso.data,&ingrs.dtIngresso.mes,&ingrs.dtIngresso.ano);
                fscanf(fp,"%d %d\n",&ingrs.ticket, &ingrs.tipo);
                ingressos[ingrs.ticket] = ingrs;
                qtd++;
            }
             fclose(fp);
        puts("Dados carregados com sucesso...");
        printf("Foram carregados %d registros de compras de ingressos...\n",qtd);
    }else{
        puts("Arquivo inexistente ou erro de leitura de arquivo!");
    }
    }



