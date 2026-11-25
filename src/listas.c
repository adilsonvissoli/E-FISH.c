#include "../include/utils.h"
#include "../include/listas.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar_lista_peixes(controle_lista_peixes_t *peixes)
{
    peixes -> primeiro = NULL;
    peixes -> ultimo = NULL;
}

void inicializar_lista_clientes(controle_lista_clientes_t *clientes)
{
    clientes -> primeiro = NULL;
    clientes -> ultimo = NULL;
}

void inicializar_lista_vendas(controle_lista_vendas_t *vendas)
{
    vendas -> primeiro = NULL;
    vendas -> ultimo = NULL;
}

//criar datas
peixe_t criar_novo_peixe()
{
    peixe_t peixe;

    printf("Identificação.....: ");
    scanf("%i", &peixe.id);
    getchar();

    printf("Espécie...........: ");
    fgets(peixe.especie, T, stdin);
    retirar_enter(peixe.especie);
    formatar_maiscula(peixe.especie);

    printf("Quantidade estoque: ");
    scanf("%f", &peixe.qtd_estoque);
    getchar();

    printf("Valor por kg......: ");
    scanf("%f", &peixe.vlr_unitario);

    return peixe;
}

cliente_t criar_novo_cliente()
{
    cliente_t cliente;

    printf("Identificação.....: ");
    scanf("%i", &cliente.id);
    getchar();

    printf("Nome cliente......: ");
    fgets(cliente.nome, T, stdin);
    retirar_enter(cliente.nome);
    formatar_maiscula(cliente.nome);

    printf("Telefone..........: ");
    fgets(cliente.telefone, T, stdin);
    retirar_enter(cliente.telefone);
    formatar_maiscula(cliente.telefone);

    cliente.status = true; //ativo

    return cliente;
}

venda_t criar_nova_venda()
{
    venda_t venda;

    return venda;
}

//criar o nó
node_peixe_t *criar_novo_node_peixe(peixe_t peixe)
{
    node_peixe_t *novo_node = NULL;

    novo_node = (node_peixe_t*)malloc(sizeof(node_peixe_t));

    novo_node -> peixe = peixe;
    novo_node -> prox = NULL;

    return novo_node;
}

node_cliente_t *criar_novo_node_cliente(cliente_t cliente)
{
    node_cliente_t *novo_node = NULL;

    novo_node = (node_cliente_t*)malloc(sizeof(node_cliente_t));

    novo_node -> cliente = cliente;
    novo_node -> prox = NULL;

    return novo_node;
}

node_venda_t *criar_novo_node_venda(venda_t venda)
{
    node_venda_t *novo_node = NULL;

    novo_node = (node_venda_t*)malloc(sizeof(node_venda_t));

    novo_node -> venda = venda;
    novo_node -> prox = NULL;

    return novo_node;
}

//inserir na lista
void inserir_node_lista_peixe(controle_lista_peixes_t *controle, node_peixe_t *node_peixe)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = node_peixe;
    } else {
        controle->ultimo->prox = node_peixe;
        
    }
}

void inserir_node_lista_cliente(controle_lista_cliente_t *controle, node_cliente_t *node_cliente)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = node_cliente;
    } else {
        controle->ultimo->prox = node_cliente;
        
    }
}

void inserir_node_lista_venda(controle_lista_venda_t *controle, node_venda_t *node_venda)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = node_venda;
    } else {
        controle->ultimo->prox = node_venda;
        
    }
}
