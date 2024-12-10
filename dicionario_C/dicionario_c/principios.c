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

4 bytes * 7 posi��es = 28 bytes
int dormirNoSofa[7] = {19,20,21,22,23,24,25};

3 bytes * 10 posi��es = 30 bytes
char tarefasDeCasa [3] [10] = {
			"Varrer",
			"Lou�a",
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

	struct canal CDFTV = {"C�digo Fonte TV",222484,97.26}


*/

/*  Exemplo de ponteiro: uma vari�vel que armazena o endere�o de outra vari�vel
	#include <stdio.h>
		int main()
	{
		//DECLARA��O DE VARI�VEL E PONTEIRO
		int ano, *pAno

		//INICIALIZA��O
		ano = 2024;
		pAno = &ano;

		printf("%d" , *pAno);
		//O Valor de 'ano': 2024

		printf("%d" , *&ano);
		//2024

		printf("%u" , &Ano);
		// endere�o de ano: algo como 0x7fff5694dc58

		printf ("%u" , pAno)
		// o endere�o de ano

		printf("%u" , &pAno);
		// o endere�o de 'pAno' <> 'ano'

		return 0;

*/

