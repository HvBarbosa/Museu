 typedef struct data Data;

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
    void printTipo(int tipo);
    void comprarIngressos(struct ingresso Ingressos[], int numIngresso);
    void valorDaCompra(int valor);
    void printIngresso(Ingresso ingrs);
    void printIngresso(ingresso ingressos[], int ticket);
    void pagarIngresso(Ingresso ingressos[], int valorTotal);
    void salvarDadosIngressos(Ingresso ingressos[], int ticket);
    void carregarDadosIngressos(Ingresso ingressos[],int *pid);



