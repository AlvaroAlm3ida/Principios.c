#include  <stdio.h> //Biblioteca de entrada e saída 
#include <stdlib.h> // Biblioteca de conversão de números representados em strings
#include <time.h> //Biblioteca para manipulação de datas e horários na linguagem

//#define NUMERO_DE_TENTATIVAS 5	// CONSTANTE DEFINIDA E CONSTANTES EM C POR CONVENÇÃO DEVEM SER FEITAS UTILIZANDO APENAS LETRAS MAIUSCULAS

int main(){
	//imprime o cabeçalho do nosso jogo
	printf("*******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("*******************************************\n");
	printf("	____________________$										\n");
	printf("___________________$$$											\n");
	printf("__________________$$$$$											\n");
	printf("_________________$$$$$$$										\n");
	printf("________________$$$$$$$$$										\n");
	printf("_______________$$$$$$$$$$$										\n");
	printf("______________$$$$$$$$$$$$$										\n");
	printf("_____________$$$$$$$$$$$$$$$									\n");
	printf("____________$$$$$$$$$$$$$$$$$									\n");
	printf("___________$$$$$$$$$$$$$$$$$$$									\n");
	printf("_________$$$$$$$$$$$$$$$$$$$$$$$								\n");
	printf("________$_______________________$								\n");
	printf("_______$_________________________$								\n");
	printf("_______$_________________________$								\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$						\n");
	printf("_____$$$$$$__$$___________$$__$$$$$								\n");
	printf("____$$$$$___$$$$_________$$$$__$$$$_$_$_$_$_$_$					\n");
	printf("____$$$$$____$$___________$$____$$$_$$$$$$$$$$					\n");	
	printf("_____$$$$_______________________$$$_$_$__$__$					\n");
	printf("_______$$$$____$$______$$______$$$__$_$_$__$					\n");
	printf("__________$$$____$$$$$$$_____$$______$_$$_$						\n");
	printf("____________$$$___________$$$________$$$$$						\n");
	printf("_____________$$$$$$$$$$$$$$$$$$______$$$$						\n");
	printf("___________$$$$$$$$$$$$$$$$$$$$$$$___$$$						\n");
	printf("__________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$							\n");
	printf("_________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$							\n");
	printf("________$$$$$$$$$$$$$$$$$$$$$$_$$__$$$							\n");
	printf("________$___$$$$$$$$$$$$$$$$$$___$$$$							\n");
	printf("________$$__$$$$$$$$$$$$$$$$$$____$$							\n");
	printf("_________$$$$$$$$$$$$$$$$$$$$$___$$								\n");
	printf("___________$$$$$$$$$$$$$$$$$$$___$$								\n");
	printf("___________$$$$$$$$$$$$$$$$$$$__$$								\n");
	printf("___________$$$$$$$$$$$$$$$$$$$__$$								\n");
	printf("___________$$$$$$$$$$$$$$$$$$$_$$								\n");
	printf("____________$$$___$$$$$___$$$__$$								\n");
	printf("_______________$$$_____$$$____$$								\n");

printf("\n\n");

int segundos = time(0);	// Epoch-> números de segundos desde 1 de janeiro de 1970 até a atualidade
srand(segundos);

int numerogrande = rand();

int numeroSecreto = numerogrande % 100;  //variável declarada, se queremos um número entre 0 e 99 temos que dividir por 100 sendo o resto da divisão representado por %
int chute;  // variáveis em C por convenção devem ser criadas apenas com letras minusculas
int tentativas = 1;
double pontos = 1000;

int acertou = 0 ;

int nivel;
printf("Qual nível de dificuldade?\n");
printf("(1)Fácil (2)Médio (3)Difícil\n\n");
printf("Escolha: ");
scanf("%d", &nivel);

int numerodetentativas;
switch(nivel){
	case 1:
		numerodetentativas = 20;
		break;
	case 2:
		numerodetentativas = 15;
		break;
	default:
		numerodetentativas = 6;
		break;
}

//double pi = 3.1415; EXEMPLO

for(int i=1; i<= numerodetentativas; i++){
		printf("Tentativa %d\n",tentativas);
		printf("Qual é o seu chute? ");
			
		scanf("%d" ,  &chute);			// função que lê do teclado e os parâmentros são o que estão entre (), o %d inteiro no caso e a variável.
		printf("Seu chute foi %d\n", chute); 

		if(chute < 0){
			printf("Vocênão pode chutar números negativos!\n");
					continue;   // Para a execução do código mas faz o for continuar não quebrando o loop
		}

		int maior = chute > numeroSecreto;
		int acertou = (chute == numeroSecreto);
	
		//printf("acertou: %d\n", acertou); Nessa parte seria como se fosse um contador de acertos

		if(acertou){
			printf("Parabéns! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");
			
			break; 
		}
		else if(maior){
			printf("Seu chute foi maior que o número secreto\n");
		}
		else{
			printf("Seu chute foi menor que o número secreto\n");
		}
		tentativas++;

		double pontosperdidos = abs(chute - numeroSecreto) / (double)2;
		pontos = pontos - pontosperdidos;
	}

	printf("Fim de jogo\n");

	if(acertou){
		printf("Você ganhou!\n");
		printf("Você acertou em %d tentativas !\n", tentativas);
		printf("Total de pontos: %.1f\n", pontos);
	}else{
		printf("Você perdeu, tente de novo!\n");

	}

}

