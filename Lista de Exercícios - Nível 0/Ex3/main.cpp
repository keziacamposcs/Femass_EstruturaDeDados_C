/*
Desenvolva um programa que implemente um vetor din�mico para armazenamento
de n�meros inteiros, com as seguintes fun��es b�sicas:

1- Cadastrar n�mero;
2- Exibir n�mero(s) cadastrados;
3- Exibir quantidade de n�meros cadastrados;
4- Remover �ltimo n�mero cadastrado;
5- Sair.
*/

#include <stdio.h>
#include<stdlib.h>


//Opcao 1
int* cadastrarnumero(int *user, int *n)
{
	printf("Informe o numero de componentes do vetor: \n");
	scanf("%d", &n);
	
  	user = (int *) malloc(n * sizeof(int));
	
	//Armazenando os dados em um vetor
	for (int i = 0; i < n; i++)
  	{
	  	printf("Digite o valor para a posicao %d do vetor: \n", i+1);
	  	scanf("%d", &user[i]);
  	}
	
	return user;
		
}


//Opcao 2 ----Erro
void exibir(int *user, int n)
{
	printf("\nExibir numeros:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%d\n"), user[i];
	}
	
}


//Opcao 3
void exibirquant(int n)
{	
	printf("\nQuantidade de numeros cadastrados: %d\n", n);
}


//Opcao 4
int removerult(int *user, int *n)
{
	free(user);
	user = NULL;
	*n = *n - 1; //Atualiza o numero de componente do vetor
}

/*-------------------------------------------------------------------*/

int main()
{
	int op; //opcoes do menu
	int *usuario = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
  
	
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar usuarios\n");
		printf("2- Exibir numero(s) de usuarios cadastrados\n");
		printf("3- Exibir quantidade de usuarios cadastrados\n");
		printf("4- Remover ultimo usuario cadastrado\n");
		printf("5- Sair\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				cadastrarnumero(usuario, n_comp);
				break;
				
			case 2:
				exibir(usuario, n_comp);
				break;
				
			case 3:
				exibirquant(n_comp);
				break;
			
			case 4:
				removerult(usuario, &n_comp);
				break;
				
			case 5:
				system("pause");
				printf("Saindo  do programa...");
				exit(0);
				break;
		}
	}
	while(op);
	
	return(0);
}
