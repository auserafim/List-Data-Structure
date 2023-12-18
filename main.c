#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_lista lista;

  lista.qtd = 0;

  insere_fim_lista(&lista, 30);

  insere_fim_lista(&lista, 560);

  insere_pos_lista(&lista, 50, 2);

  insere_pos_lista(&lista, 40, 3);

  imprime_lista(lista);

  //remove_duplo(&lista);

   
  imprime_lista(lista);

  //int valor_removido_posicao = remove_posiscao_lista(&lista, 2 )

  //printf("O VALOR REMOVIDO FOI -> %d \n", remove_posicao_lista(&lista, 2 ));
    
  //printf("O VALOR REMOVIDO FOI -> %d \n", remove_posicao_lista(&lista, 2 ));


  
 // busca_valor_lista(lista, 20);

  busca_maior_lista(lista); 

  busca_menor_lista(lista);


  imprime_lista(lista);

 // busca_posicao_valor(lista, 30 );

  busca_valor_lista(&lista, 30);

  remove_valor_lista(&lista, 30);

  imprime_lista(lista);

  return 0;
}