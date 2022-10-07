/*10) Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50. (0,1)*/
#include <stdio.h>

int main(){
	
	int num;
	
		printf("Coloque um numero: ");
		scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("O numero e par\n");
	if(num>15)
		printf("E maior que 15");
	else 
		printf("Nao e maior que 15");
} 
	if(num % 2 == 1){
	printf("O numero e impar\n");
	if (num<50)
	printf("E menor que 50");
	else
	printf("Nao e menor que 50");
}
}
