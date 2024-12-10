#include <stdio.h>

int main (){

int a = 3;
int b = 2;
double pontos = a/(double)b;  // PROCESSO DE CASTING OCORRENDO NESSA LINHA QUE É QUANDO UM SE CONVERTE UMA VARIÁVEL DE UM TIPO PARA OUTRO EM UM DETERMINADO MOMENTO DO CÓDIGO
print("%f\n", pontos);

double pi = 3.1415;
int piconvertido = (int)pi;

printf("%f %d\n",pi,piconvertido);

}