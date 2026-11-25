#ifndef TIPOS_H
#define TIPOS_H

#include <stdint.h>
#include <stdbool.h>

#define T 100

typedef char string[T];

//Peixe
typedef struct peixe {
    uint8_t id;
    string especie;
    float qtd_estoque;  //kg
    float vlr_unitario; //kg
} peixe_t;

//client 
typedef struct cliente {
    uint8_t id;
    string nome;
    string telefone;
    bool status;
} cliente_t;

//vendas
typedef struct vendas {
    uint8_t id;
    uint8_t id_cliente;
    uint8_t id_peixe;
    float quantidade;
    float custo;
} vendas_t;

//nó peixe
typedef struct node_fish{
    peixe_t fish;
    struct node_peixe *prox;
} node_fish_t;

//nó cliente
typedef struct node_client{
    cliente_t client;
    struct node_client *prox;
} node_client_t;

//nó venda
typedef struct node_sale{
    vendas_t sale;
    struct node_sale *prox;
} node_sale_t;

//controle da listas de peixes
typedef struct controle_lista_peixes {
    node_fish_t *primeiro;
    node_fish_t *ultimo;
} controle_lista_peixes_t;

//controle da listas de clientes
typedef struct controle_lista_clientes {
    node_client_t *primeiro;
    node_client_t *ultimo;
} controle_lista_clientes_t;

//controle da listas de vendas
typedef struct controle_lista_vendas {
    node_sale_t *primeiro;
    node_sale_t *ultimo;
} controle_lista_vendas_t;

#endif