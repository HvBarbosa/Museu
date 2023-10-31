#include <stdio.h>

#define INTEIRA 1
#define MEIA 2
#define MEIA SOCIAL 3
#define INATIVO 4

struct data{

    int data;
    int mes;
    int ano;
};
    typedef struct data Data;

    struct Ingresso{
        char nome[20];
        char obra[30];
        int ticket;
        int valor;
        Data dtTicket;
        float hora;
    };
    typedef struct ingresso Ingresso;

void printTipo(int tipo){
    if(tipo == 1){
        printf("Inteira");
    }else if(tipo == 2){
        printf("Meia");
    }else if(tipo == 3){
        printf("Meia Social");
    }else{
        printf("Inativo");
    }
}

void printIngresso(Ingresso ingrs){
    puts("-----------------------");
    printf("ID: %d\n",ingrs.ticket);
    printf("Nome: %s\n",ingrs.nome);
    printf("Data de compra: %d/%d/%d\n",aln.dtIngresso.dia, aln.dtIngresso.mes, aln.dtIngresso.ano);
    printf("Tipo: "); printTipo(int tipo); printf("\n");
    puts("-----------------------");
}

void printIngresso(Ingresso ingressos[], int ticket){
    Ingresso ingrs;
    puts("Imprimindo registros de compras...");
    for(int i=0; i<ticket; i++){
            ingrs = ingressos[1];
            printIngresso(ingrs);
    }
}

void salvarDadosIngressos(Ingresso ingressos[], int ticket){
    FILE *fp;
    fp = fopen("Ingressos.txt,"W");
    puts("Salvando dados em arquivos...");
    fprintf(fp,"%d\n", ticket);

    for(int i=0; i<ticket; i++){
        Ingresso ingrs;
        ingrs = ingressos[i];
        fprintf(fp,"%s\n",ingrs.nome);
        fprintf(fp,"%d/%d/%d\n",ingrs.dtIngresso.dia,ingrs.dtIngresso.mes,ingrs.dtIngresso.ano);
        fprintf(fp,"%d %d\n",ingrs.ticket, ingrs.tipo);
    }
    puts("Dados foram salvos com sucesso!");
    fclose(fp);
}

void carregarDadosIngressos(Ingresso ingressos[],int *pid){
    FILE *fp
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
                fscanf(fp,"%d/%d/%d\n",&ingrs.dtIngresso.dia,&ingrs.dtIngresso.mes,&ingrs.dtIngresso.ano);
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
