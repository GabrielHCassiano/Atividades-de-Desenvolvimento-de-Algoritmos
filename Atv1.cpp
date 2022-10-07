/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número. (0,1)*/
#include <stdio.h.>
#include <math.h>

int main(){
	
	int num1, num2;
	int res1, res2, res3, modulo;
	float raiz, seno;
	
	printf("Coloque um numero: ");
	scanf("%d", &num1);
	printf("Coloque um numero: ");
	scanf("%d", &num2);
	
	res1 = num1 + num2;
	res2 = num1 + num2 * num2;
	res3 = num1 * num1;
	raiz = sqrt((num1 * num1) + (num2 * num2))  ;
	seno = sin(num1 - num2);
	modulo = abs(num1);
	
	printf("A soma: %d\n", res1);
	printf("O produto do primeiro pelo quadrado do segundo: %d\n", res2);
	printf("O quadrado do primeiro: %d\n", res3);
	printf("A raiz: %.2f\n", raiz);
	printf("O seno da diferenca: %f\n", seno);
	printf("O modulo do primeiro: %d\n", modulo);
	
}
