#include  <stdio.h>

int main(){
	//imprime o cabeçalho do nosso jogo
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("*******************************************\n");

	int numeroSecreto = 42;  //variável declarada

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d" , &chute);			// função que lê do teclado e os parâmentros são o que estão entre (), o %d inteiro no caso e a variável.
	printf("Seu chute foi %d\n", chute);
}