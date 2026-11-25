#include "../include/menus.h"
#include <stdio.h>

int menu_principal()
{
    int opc;

    printf("\n|==================|\n");
    printf("|======E-FISH======|\n");
    printf("|==================|\n\n");
    printf("1.Estoque\n");
    printf("2.Clientes\n");
    printf("3.Vendas\n");
    printf("0.Sair\n\n");
    printf("--->");
    scanf("%i", &opc);
    getchar();

    return opc;
}

int menu_estoque()
{
    int opc;

    printf("\n|===================|\n");
    printf("|======ESTOQUE======|\n");
    printf("|===================|\n\n");
    printf("1.Incluir item\n");
    printf("2.Excluir item\n");
    printf("3.Consultar item por espécie\n");
    printf("4.Listar itens em estoque\n");
    printf("5.Listar itens com estoque abaixo de n valor");
    printf("0.Sair\n\n");
    printf("--->");
    scanf("%i", &opc);
    getchar();

    return opc;
}

int menu_clientes()
{
    int opc;

    printf("\n|====================|\n");
    printf("|======CLIENTES======|\n");
    printf("|====================|\n\n");
    printf("1.Incluir novo cliente\n");
    printf("2.Excluir cliente\n");
    printf("3.Listar clientes cadastrados\n");
    printf("4.Consultar cliente por nome\n");
    printf("0.Sair\n\n");
    printf("--->");
    scanf("%i", &opc);
    getchar();

    return opc;
}

int menu_vendas()
{
    int opc;

    printf("\n|==================|\n");
    printf("|======VENDAS======|\n");
    printf("|==================|\n\n");
    printf("1.Incluir venda\n");
    printf("2.Listar vendas por cliente\n");
    printf("3.Listas todas as vendas\n");
    printf("4.Listar vendas por espécie");
    printf("");
    printf("0.Sair\n\n");
    printf("--->");
    scanf("%i", &opc);
    getchar();

    return opc;
}
