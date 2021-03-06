//lista.h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


struct lista {
	int info;
	struct lista* ant;
	struct lista* prox;
};

typedef struct lista Lista;


Lista* inicializa(); //ok

bool vazia(Lista* l); //ok

Lista* insere_inicio (Lista* l, int v); //ok

Lista* insere_fim (Lista* l, int v);

void imprime(Lista* l); //ok

Lista* remove_inicio(Lista* l); //ok

Lista* remove_fim(Lista* l); //ok

Lista* remove_valor(Lista* l, int v); 	//ok

void imprime_frente_fim(Lista* l); //ok

void imprime_reverso(Lista* l); //ok

Lista* busca (Lista* l, int v); //ok

void busca_elemento (Lista* l, int v);  //ok

