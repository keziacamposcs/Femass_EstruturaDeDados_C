//lista.cpp
#include "lista.h"

Lista* inicializa()
{
	return NULL;
}

bool vazia(Lista* l)
{
	return (l==NULL);
}

int tamanho_lista (Lista* l)
{
	//calcula quantidade de dados na Lista
	Lista* p=l;
	
	int tamanho=0;
	
	while(p!=NULL)
	{
		tamanho++;
		p=p->prox;
	}
	return tamanho; //retorna quantidade de dados na Lista
}

/******************************************************************************************/

/*
1- insere o dado inteiro x no inicio do vetor
*/
Lista* insere_inicio(Lista* l, int i)
{
	Lista* novo= (Lista*) malloc(sizeof(Lista));
	
	novo->info=i;
	novo->prox = l;
	
	return novo;
}

/*
2- insere o dado inteiro x no fim do vetor
*/
Lista* insere_fim(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	Lista* aux = NULL; //auxiliar
	
	novo->info = i;
	
	novo->prox = NULL;	
	
	if(!vazia(l))
	{
		novo->ant = l;
		l = novo;
	}
	else
	{
		aux = l;
		
		while(aux->prox != NULL)
		{
			aux = aux->prox;
		}
		aux->prox = novo;
		novo->ant = aux;
	}
	return l;
}

/*
3 - Imprime
*/
void imprime(Lista* l)
{
	Lista* p;
	
	printf("Info = ");
	
	for(p=l; p!=NULL; p=p->prox)
	{
		printf("%d - ", p->info);
	}
	printf("\n");
}

/*
4 - Busca_sequencial(x) - busca um dado x inteiro no vetor, retornando TRUE caso positivo.
*/
Lista* busca_sequencial(Lista* l, int v)
{
	Lista* p;
	v = 0;
	int	encontrado = 0; //falso
		
}

/*
5 - Busca_binaria(x) - cria uma copia do vetor original ordenado e busca neste um dado x inteiro, retornando TRUE caso positivo.
*/
Lista* busca_binaria(Lista* l)
{
	int direita, esquerda, meio;
	encontrado = 0; /*Falso*/
	esquerda = 0;
	direita = tamanho - 1;
	
	while(esquerda<=direita && !encontrado)
	{
		meio=(direita+esquerda)/2;
		
		if (vetor[meio] == valor)
		{
			encontrado = 1; /*Verdadeiro*/
		}
		else if (valor < vetor[meio])
		{
			direita = meio - 1;
		}
		else
			esquerda = meio + 1;
	}
	
	if(encontrado)
	{
		printf ("Valor %d encontrado na posicao %d\n",
		vetor[meio], meio);
	}
	else
	{
		printf ("Valor %d nao encontrado\n", valor);
	}
}



/*
6 - Ordena_BubbleSort() - ordena o vetor original, sobrescrevendo-o.
*/
Lista* swap(Lista* b, Lista* c)
{
	int tmp = b->info;
	b->info = c->info;
	c->info = tmp;
	return b;	
}

Lista* ordena_bubblesort(Lista* l)
{
	int qtd=Tamanho_lista(l); //busca quantidade de dados na lista
	Lista* a; Lista* b; Lista* c;
	
	if (qtd>1)
	{
		//so faz sentido ordenar Lista com mais de 1 item...
		for(int i=0; i<qtd; i++)
		{ 	
			//Inicia a bolha a partir de L
			a=l; //anterior
			b=l; //atual
			c=l->prox; ///dep/ois
			int flag=0; //apenas para sinalizar a primeira troca a partir de L
			
			while(c!=NULL)
			{
			 	//No da direita e nao nulo, entao da para avaliar troca...
				if(b->info > c->info)
				{
					//se esq > dir, entao TROCA (swap)!b Veja funcao swap...
					b = swap(b,c);	//troca b (esq vai para dir) por c (dir vai para esq)			
				}
				if (flag==0)
				{
					//Tem que atualizar L para novo primeiro no - novo n� inicial... 
					l = b; //atualiza L para novo primeiro no
					flag=1;	
				}				
				else a->prox = b; //refaz apontamento do n� anterior com o novo n� esq, que por sua vez tem ponteiro para demais nos...
			
				//anda a bolha a, b, c para nova analise
				a=b;
				b=b->prox;
				c=b->prox;	
			}
		}	
	}
	return l; //retorna a nova Lista resultante ja ordenada.
}

