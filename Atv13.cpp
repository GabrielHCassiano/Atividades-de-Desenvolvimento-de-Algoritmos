/*13) Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um.*/
#include <stdio.h>

int main(){
	
	int i,num;
	
	printf("numero positivo: ");
	scanf("%d", &num);
	
	
	for(i=0;i<=num && num>=1 ;i++) 
	 if(i%2==1)
	printf("%d ", i);
}
