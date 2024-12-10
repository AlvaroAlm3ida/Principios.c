# Principios.c
ESTUDO SOBRE C E SEUS PRINCIPIOS UTILIZANDO UM SIMPLES JOGO COMO BASE PARA ESTUDO DE NUMEROS RAMDÔMICOS, STRINGS, IF, ELSE. SWITCH E ETC...

Para colocar o comportamento de quebra de linha como padrão  precisamos falar que no final da nossa frase, o printf imprima
também um linha nova \n 
				#INCLUDE <Stdio>	-> biblioteca de entrada e saída 
				
				int main(){
				printf ("qualquer coisa\n";
				
				return 0;
				}
				
O INT na linha inicial indica que sera retornado um valor inteiro
Para boas praticas, para indicar que nossa função executou sem nenhum problema, por convenção esse numero é 0

scanf() = Função que lê e pega do teclado
d% = inteiro; mascara

	scanf(%d, &chute); -> vai pegar e pedir para digitar o numero inteiro e comparar com o chute que é a variavel que estamos tentado chegar

Em C as variáveis devem ser declaradas dentro do escopo

	Ex: 		int main(){
			
		int variavel
		//posso usar ela aqui
		
			variavel = variavel + 1;
			
			if(alguma condicao){
			
			// posso usar aqui também
			
		}
		}
		// A partir daqui não pode mais ser usado
		
		caso de if
		
			int main(){
			if(alguma condicao){
		
			int variavel = 1;
			
			//posso usar aqui
			
			variavel = variavel+1;
			
		}
		//Aqui não posso usar, porque ela não existe 
		somente dentro do escopo
		}
		
Tudo que começa com # em C é uma diretiva

#Define diretiva que permite fazer uma constante

Por convenção em C as variáveis devem ser feitas apenas utilizando letras minusculas e para fazer constantes utilizar apenas letras maiusculas

BREAK = Parar o código / quebrar o loop
CONTINUE  = Parar execução do bloco de código mas mantendo a execução de outros blocos / Não quebra o loop


DIFERENÇA ENTRE DOUBLE E INT = INT apenas suporta numeros inteiros enquanto variáveis double suportam casas decimais dando mais precisão 

Mascara do double é %f 
%.1f diz quantas casas decimais eu quero que apareça


INTEIROS =  SHORT 2 bytes 				
			INT  4 bytes = 32 bits = 2 elevado a 32
			LONG 8 bytes = 64 bits = 2 elevado a 64


PONTOS FLUTUANTES = Double 8 bytes
					float 4 bytes
					
					
CASTING = CONVERTE UMA VARIÁVEL DE UM TIPO PARA OUTRO SÓ EM UM DETERMINADO MOMENTO DO CÓDIGO

Para fazer no C basta antes da variavel colocar o tipo exemplo:
(double)variável;       ou  (double)2;

Função ABS => converte negativo para positivo

biblioteca que precisa importar para utilizar essa função é <Stdlib.h>

Função Rand = Entrega números randômicos
Para "controlar" o número de casas decimais temos que utilizar resto na divisão

EX:
	int numerogrande = rand();
	
	int numero = numerogrande % 100; 		// o numero vai ficar entre 0 e 99
	
RESTO DE DIVISÃO
	É um número maior ou igual a zero e menor que o divisor. Ele é a sobra na aplicação do algoritmo em uma divisão
	de numeros inteiros
	
EPOCH -> Número de segundos desde 1 de janeiro de 1970

	#include <time.h>		//Biblioteca que precisa para manipulação de datas e horarios
	
	int segundos time(0);
	srand(segundos);
	
DIFERENÇA ENTRE FOR E WHILE 
	For é mais adequado quando se sabe a quantidade de iterações, enquanto o while é melhor para quando não se sabe
	
	for ( inicialização,teste lógico,incremento){
	}
	
	while	
		var inicialização;while(teste lógico){ incremento}
		

ALTERNATIVA PARA IF
EX:
	Switch(variavel)
		case 1 
			variavel= 20;
			break;
		case 2
			variavel= 15;
			break;
		default:
			variavel= 6;
			break;
