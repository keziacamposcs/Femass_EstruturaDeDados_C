#include "Lista.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insercao de elementos no inicio;\n");
	printf("2 - Insercao de elementos no fim;\n");
	printf("3 - Imprime valores dos elementos;\n");
	printf("4 - Retorna um valor inteiro representando a quantidade de dados contidos na lista\n");
	printf("5 - Busca um elemento na lista;\n");
	printf("6 - Retira numero especifico\n");
	printf("7 - Retira do inicio da lista\n");
	printf("8 - Retira do fim da lista\n");
	printf("9 - Retornar o no-dado no inicio da lista para exibicao, sem retira-lo\n");
	printf("10 - Retornar o no-dado no fim da lista para exibicao, sem retira-lo\n");
	printf("11 - Libera lista\n");
	printf("12 - Sair\n");
	
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
		
	Lista l; //instanciando objeto l conforme a classe Lista
	
	int i; //numero informado pelo usuario
	int op;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			case 1:
				printf( "Numero para inserir no inicio: ");
				scanf( "%d", &i );
			
				l.insere_inicio(i);
				
				system("PAUSE");
				break;

			case 2:
				printf( "Numero para inserir no fim: ");
				scanf( "%d", &i );
			
				l.insere_fim(i);
				
				system("PAUSE");
				break;
							
			
			case 3:
				l.imprime(); 
				 
				system("PAUSE");
				break;
			
			
			case 4:
				l.tamanho();
		
				system("PAUSE");
				break;	
				
				
			case 5: 
				printf( "Numero para buscar: ");
				scanf( "%d", &i);
				
				l.busca(i);
				
				system("PAUSE");
				break;


			case 6: 
				printf( "Digite um numero pra retirar: ");
				scanf( "%d", &i);
				
				l.retira(i);
				
				system("PAUSE");
				break;
				
				
			case 7:
				l.retira_inicio();
								
				system("PAUSE");
				break;				


			case 8:
				l.retira_fim();

				system("PAUSE");
				break;	
				
			case 9:
 				l.imprime_inicio();
				
				system("PAUSE");
				break;
				
				
			case 10:
				l.imprime_fim();
				
				system("PAUSE");
				break;		
			
			case 11:
				l.libera();
				
				system("PAUSE");
				break;		
		}
	}
	while(op != 12);
	system("pause");
	return 0;
}
