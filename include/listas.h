#ifndef LISTAS_H
#define LISTAS_H

#include "tipos.h"

void inicializar_lista_peixes(controle_lista_peixes_t *peixes);
void inicializar_lista_clientes(controle_lista_clientes_t *clientes);
void inicializar_lista_vendas(controle_lista_vendas_t *vendas);

//criar datas
peixe_t criar_novo_peixe();
cliente_t criar_novo_cliente();
venda_t criar_nova_venda();

//criar o nó
node_peixe_t *criar_novo_node_peixe(peixe_t peixe);
node_cliente_t *criar_novo_node_cliente(cliente_t cliente);
node_venda_t *criar_novo_node_venda(venda_t venda);

//inserir na lista
void inserir_node_lista_peixe(controle_lista_peixes_t *controle, node_peixe_t *node_peixe);
void inserir_node_lista_cliente(controle_lista_cliente_t *controle, node_cliente_t *node_cliente);
void inserir_node_lista_venda(controle_lista_venda_t *controle, node_venda_t *node_venda);

#endif