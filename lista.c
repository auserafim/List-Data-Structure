#include "lista.h"

/*
Função que checa se a lista está cheia 
*/

int estaCheia(tipo_lista *lst) { 

  return lst->qtd == TAM ? 1 : 0;

}


int estaVazia(tipo_lista *lst) { 

  return lst->qtd == 0 ? 1 : 0;

}

/*
Função de inserção no fim
*/
void insere_fim_lista(tipo_lista *lst, int aux) {

  if (!estaCheia(lst)) {
    lst->lista[lst->qtd] = aux; 
    lst->qtd++;
    } else {
    printf("\nERRO: A lista está cheia");
  }
}

/*
Função de inserção no início
*/
void insere_inicio_lista(tipo_lista *lst, int aux) {

  if(!estaCheia(lst)) {

    for(int i = lst->qtd; i > 0; i--) {
      lst->lista[i] = lst->lista[i-1]; // fazer a sucessora receber a antecessora
    }
    lst->lista[0] = aux;
    lst->qtd++; 
   
  } else {
    printf("\nERRO: A lista está cheia");
  }

}

/*
Função que insere os elementos numa posição dada
*/

void insere_pos_lista(tipo_lista *lst, int aux, int index) {

  if (!estaCheia(lst)) {

    if ((index >= 0) && (index <= lst->qtd) ) {

     for(int i = lst->qtd; i > index; i--) {

      lst->lista[i] = lst->lista[i-1];

     }

    lst->lista[index] = aux; 
    lst->qtd++;
  } 
  } else {
    printf("\nERRO: A lista está cheia");
 } 
}

/*
Função que imprime a lista 
*/

void imprime_lista(tipo_lista lst) { 

  printf("\n\nLISTA: [");

  for(int i = 0; i < lst.qtd; i++) {

    printf("%d" " ", lst.lista[i]);

  }

  printf("]\n");
}

/*
Função que remove pela inicio e pelo final da lista 
*/

void removeDuplo(tipo_lista *lst) {

}


int remove_fim_lista(tipo_lista *lst) {
  int aux;
  if(estaVazia(lst)) {
    printf("\nA lista está vazia. Não há nada para remover");
  } else {
    aux = lst->lista[lst->qtd - 1];
    lst->qtd--;
  }

  return aux;
}


int remove_inicio_lista(tipo_lista *lst) {
  int aux;
  if(estaVazia(lst)) {
    printf("\nA lista está vazia. Não há nada para remover");
  } else {
    aux = lst->lista[0];
    lst->qtd--;
    for(int i = 0; i < lst->qtd; i++) {
    lst->lista[i] = lst->lista[i+1];
    }
   
  }

  return aux;
}

void remove_duplo(tipo_lista *lst) {
  if(estaVazia(lst)) {
    printf("\nA lista está vazia. Não há nada para remover");
  } else if (lst->qtd == 1){
    remove_inicio_lista(lst); 
  } else {
    remove_inicio_lista(lst);
    remove_fim_lista(lst); 
  }
}

int remove_posicao_lista(tipo_lista *lst, int index) {
int aux; 
 if ( (index >= 0) && (index < lst->qtd) ){
   aux = lst->lista[index];
   lst->qtd--;
   for(int i = index; i < lst->qtd; i++) {
    lst->lista[i] = lst->lista[i+1];
 }

 } else {
  return -1;
 }
  return aux;

}


int busca_valor_lista(tipo_lista *lst, int aux){
  int i;
  for(i = 0; i < lst->qtd; i++){
    if(lst->lista[i] == aux) {
       return i;
    } else {
        return -1;
    }    
  }
}

int busca_maior_lista(tipo_lista lst) {
  int maior;
  if(lst.qtd > 0) {
    maior = lst.lista[0];
    for(int i = 1; i < lst.qtd; i++) {
      if(lst.lista[i] > maior) {
      maior = lst.lista[i];
    } 
      
  }     
   return printf("%d é o maior da lista", maior);

  } else {
    return -1;
  }
  
}

int busca_menor_lista(tipo_lista lst) {
  int menor;
  if(lst.qtd > 0) {
    menor = lst.lista[0];
    for(int i = 1; i < lst.qtd; i++) {
      if(lst.lista[i] < menor) {
        menor = lst.lista[i]  ;
      }
    }
    return printf("\n%d é o menor da lista", menor);
  }
}


int busca_posicao_valor(tipo_lista lst, int aux) {
 if(lst.qtd > 0){
    for ( int i = 0; i < lst.qtd; i++) {
      if(lst.lista[i] == aux) {
        return printf("O valor %d está na posição %d\n", aux, i);
      } else 
           return printf("O valor %d não está na lista\n", aux);
    
    } 
       
  }
}


int remove_valor_lista(tipo_lista *lst, int aux) {
  int index;
  index = busca_valor_lista(lst, aux);
  if( lst->qtd > 0 ) {
    if(index != -1) {
      return remove_posicao_lista(lst, index); 
    } else {
      printf("O elemento não está na lista");
    }
    }else {
    return -1;
  }
  }


int atualiza_valor(tipo_lista *lst, int valor, int novo_valor) {
  int i;
  int vezes = 0; 
  for(i = 0; i < lst->qtd; i++) {
    if(lst->lista[i] == valor) {
      lst->lista[i] = novo_valor;
      vezes++;
    }
  }
  return vezes; 
}