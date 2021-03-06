#include "lista.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insere ordenado;\n");
	printf("2 - Imprime valores dos elementos;\n");
	printf("3 - Remove dado inicial;\n");
	printf("4 - Remove dado fim;\n");
	printf("5 - Remove elemento desejado da lista\n");
	printf("6 - Imprimi inicio-fim da Lista\n");
	printf("7 - Imprimi fim-inicio da Lista\n");
	printf("8 - Busca elemento na lista;\n");
	printf("9 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}


int main(int argc, char** argv) 
{
	Lista* l; /* declara uma lista nao inicializada */
	
 	l = inicializa(); /* inicializa lista como vazia */
 	
 	int v; //elemento para inserir
	int num; //vetor ja inserido
	int op;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			case 1:
				printf( "Numero para inserir no inicio: ");
				scanf( "%d", &v );
				
				l = insere_ordenado(l, v);
				
				system("PAUSE");
				break;

			case 2:
				imprime(l); 
				printf("\n");
				
				system("PAUSE");
				break;		

			case 3:
				l = remove_inicio(l);
	
				system("PAUSE");
				break;	
						
			case 4:
				l = remove_fim(l);
								
				system("PAUSE");
				break;
				
			case 5:
				printf( "Digite um numero para remover: ");
				scanf( "%d", &v );
				
				l = remove_elemento(l, v);
				
				system("PAUSE");
				break;
				
			case 6:
				imprime_inicio_fim(l);
				
				system("PAUSE");
				break;
				
			case 7:
				imprime_fim_inicio(l);
				
				system("PAUSE");
				break;
				
			case 8:
				printf( "Digite um numero para verificar se esta na lista: ");
				scanf( "%d", &num);
				
				busca_elemento(l, num);
				
				system("PAUSE");
				break;								
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 9);
	return 0;
}

