#ifndef __LISTA_H_
#define __LISTA_H_

#include <stdio.h>
#include <stdlib.h>

//Constante para definicao da capacidade
#define TAM 5


typedef struct {
  int lista[TAM];
  int qtd;
} tipo_lista;

int estaCheia(tipo_lista *lst);
int estaVazia(tipo_lista *lst);
void remove_duplo(tipo_lista *lst);
void insere_inicio_lista(tipo_lista *lst, int);
void insere_fim_lista(tipo_lista *lst, int);
void insere_pos_lista(tipo_lista *lst, int, int);
int remove_fim_lista(tipo_lista *lst);
int remove_inicio_lista(tipo_lista *lst);
int remove_posicao_lista(tipo_lista *lst, int);
int remove_valor_lista(tipo_lista *lst, int);
void imprime_lista(tipo_lista lst);
int busca_valor_lista(tipo_lista *lst, int);
int busca_menor_lista(tipo_lista lst);
int busca_maior_lista(tipo_lista lst);
int busca_posicao_valor(tipo_lista lst, int);


#endif // Fim da __LISTA_H_
