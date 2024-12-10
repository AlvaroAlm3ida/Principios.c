/* #include <stdio.h>   // Fazendo o primeiro Hello word em C!!

int main() {
	printf("Hello Word!");
} 
*/

// TIPOS DE DADOS EM C:

/*4 bytes
int idade = 68;

1 byte 
char arroba = "@";

4 bytes (6 casas decimais)
float saldoNaConta = 18923.12

8 bytes (15 casas decimais)
double chancesDeCagar = 0.00001*/


// ARRAYS EM C:
/*

4 bytes * 7 posições = 28 bytes
int dormirNoSofa[7] = {19,20,21,22,23,24,25};

3 bytes * 10 posições = 30 bytes
char tarefasDeCasa [3] [10] = {
			"Varrer",
			"Louça",
			"Janta"
		};

*/


// STRUCTURE EM C:
/*
	struct canal
	{		
		char nome[15];
		int inscritos;
		float mediaLikes;

	};

	struct canal CDFTV = {"Código Fonte TV",222484,97.26}


*/

/*  Exemplo de ponteiro: uma variável que armazena o endereço de outra variável
	#include <stdio.h>
		int main()
	{
		//DECLARAÇÃO DE VARIÁVEL E PONTEIRO
		int ano, *pAno

		//INICIALIZAÇÃO
		ano = 2024;
		pAno = &ano;

		printf("%d" , *pAno);
		//O Valor de 'ano': 2024

		printf("%d" , *&ano);
		//2024

		printf("%u" , &Ano);
		// endereço de ano: algo como 0x7fff5694dc58

		printf ("%u" , pAno)
		// o endereço de ano

		printf("%u" , &pAno);
		// o endereço de 'pAno' <> 'ano'

		return 0;

*/

