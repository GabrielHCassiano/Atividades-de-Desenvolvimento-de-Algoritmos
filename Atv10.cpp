/*10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par
ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se
� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor
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
