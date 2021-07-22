//SISTEMA BÁSICO DE UMA PIZZARIA EM C
//Autor: Matheus Silva Lima. 2018
#include <stdio.h>
#include <stdlib.h>

#define ZERO 0 // zerar todas as variaveis

struct cadclient //struct para coletar dados do cliente
{
    char nome[35];
    char end[50];
    char email[50];
    int tel[11];
};

struct Pedido //struct para coletar informaçoes do pedido
{
    char tam[10];
    char Tmassa[12];
    char sabor[40];
    char adds[22];
    char ref[10];
    float quant[10];

};

struct Pedido p1;
struct cadclient c1;

int main()
{

    int esc;
    while(esc != ZERO) //while p/ criar menu
    {
    printf("\t\n\n------ Alo Pizza ------\n\n");
    printf("#Escolha uma opcao:\n");
    printf("-1__Cadastro\n");
    printf("-2__Pedido\n");
    printf("-3__Revisao do pedido\n");
    printf("-4__Revisao do cadastro\n");
    printf("-0__Sair\n\n");
    scanf("%d",&esc);

    switch(esc) //switch dentro do while p/ selecionar as opçoes do menu
        {
    case 0:
        sair();
        break;

    case 1:
        cadastro();
        break;

    case 2:
        pedido();
        break;

    case 3:
        RevPedido();
        break;

    case 4:
        RevCadastro();
        break;

        }
    }
}

void sair()
{
    system("cls");
    printf("\t\n\n--------- Obrigado ---------\n\n");
    system("pause");
}

void cadastro()
{
    system("cls");
        fflush(stdin);
        printf("\t\n\n------ Cadastro do cliente ------\n\n");
        printf("Nome: ");
        gets(c1.nome);
        printf("Endereco: ");
        gets(c1.end);
        printf("Email: ");
        gets(c1.email);
        printf("Telefone: ");
        gets(c1.tel);
        system("pause");
        system("cls");
}
 int m,n,o;
void pedido()
{
    system("cls");
    fflush(stdin);

   printf("\n\t-----------------MASSAS------------------\n");
   printf("\t1-Da Casa\n");
   printf("\t2-Italiana\n");
   printf("\t3-Americana\n");
   printf("\t-----------------------------------------\t\n\n");
    printf("Escolha o sabor da massa:");
        scanf("%i",&m);

    switch (m){
    case 1:
        printf("Massa: Da Casa");

        break;
    case 2:
        printf("Massa: Italiana");
        break;
    case 3:
        printf("Massa: Americana");
        break;
    default:
        printf("\nINVALIDO\n");
        return 0;
    }

printf("\n\t-----------------SABORES-----------------\t\n\t|\t\t\t\t\t|\n");
   printf("\t|\t\t1-Calabresa\t\t|\n");
   printf("\t|\t\t2-Mussarela\t\t|\n");
   printf("\t|\t\t3-Napolitana\t\t|\n");
   printf("\t|\t\t4-4 Queijos\t\t|\n");
   printf("\t|\t\t5-Frango\t\t|\n");
   printf("\t|\t\t6-Portuguesa\t\t|\n\t|");

   printf("\t\t\t\t\t|\n\t-----------------------------------------\t\n\n");

    printf("Escolha o sabor da Pizza:");
    scanf("%i",&n);
         switch (n){
    case 1:
        printf("Calabresa");
        break;
    case 2:
        printf("Mussarela");
        break;
    case 3:
        printf("Napolitana");
        break;
    case 4:
        printf("4 Queijos");
        break;
    case 5:
        printf("Frango");
        break;
    case 6:
        printf("Portuguesa");
        break;
    default:
        printf("\nINVALIDO\n");
        return 0;

    }

printf("\n\t-----------------BEBIDAS-----------------\t\n\t|\t\t\t\t\t|\n");
   printf("\t|\t\t1-Coca-Cola\t\t|\n");
   printf("\t|\t\t2-Guarana Antartica\t|\n");
   printf("\t|\t\t3-Pepsi Cola\t\t|\n");
   printf("\t|\t\t4-Guarana Jesus\t\t|\n\t|");

   printf("\t\t\t\t\t|\n\t-----------------------------------------\t\n\n");
    printf("Escolha a sua bebida:");
    scanf("%i",&o);
    switch (o){
    case 1:
        printf("\nCoca-Cola\n");
        break;
    case 2:
        printf("\nGuarana Antartica\n");
        break;
    case 3:
        printf("\nPepsi Cola\n");
        break;
    case 4:
        printf("\nGuarana Jesus\n");
        break;
default:
        printf("\nINVALIDO\n");
        return 0;
    }
        system("pause");
        system("cls");
}

void RevPedido()
{
    system("cls");
    printf ("\t\n\n------ Revisao do pedido ------\n\n");
        printf("Cliente: %s\n",c1.nome);

         switch(m)
    {
    case 1:
        printf("Massa: Da Casa\n");
        break;
    case 2:
        printf("Massa: Italiana\n");
        break;
    case 3:
        printf("Massa: Americana\n");
        break;
    }

    switch (n){
    case 1:
        printf("\nSabor: Calabresa\n");
        break;
    case 2:
        printf("\nSabor: Mussarela\n");
        break;
    case 3:
        printf("\nSabor: Napolitana\n");
        break;
    case 4:
        printf("\nSabor: 4 Queijos\n");
        break;
    case 5:
        printf("\nSabor: Frango\n");
        break;
    case 6:
        printf("\nSabor: Portuguesa\n");
        break;
    }

switch (o){
    case 1:
        printf("\nBebida: Coca-Cola\n");
        break;
    case 2:
        printf("\nBebida: Guarana Antartica\n");
        break;
    case 3:
        printf("\nBebida: Pepsi Cola\n");
        break;
    case 4:
        printf("\nBebida: Guarana Jesus\n");
        break;
}

        system("pause");
        system("cls");
}

void RevCadastro()
{
    system("cls");
    printf("\t\n\n------ Revisao do cadastro ------\n\n");
        printf("Cliente: %s\n",c1.nome);
        printf("Endereço: %s\n",c1.end);
        printf("Numero de telefone: %s\n",c1.tel);
        printf("E-mail: %s\n\n",c1.email);
        system("pause");
        system("cls");
}