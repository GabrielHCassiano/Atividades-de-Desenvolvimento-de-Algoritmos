/*4) Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/
#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um segundo numero: ");
	scanf("%d", &num2);

	printf("\n");
	
	if(num1<num2)
	printf("%d %d", num1, num2);
	else if(num1>num2) 
	printf("%d %d", num2, num1);
	else
	printf("Valores iguais");
	
}

