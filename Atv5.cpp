/*Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)
para os c�digos de 0 a 127. (0,1)*/
#include <stdio.h>

int main(){
	
	int i;
	
	for(i=0;i<=127;i++){
	 if(i%10==0)
		printf("\n");
		printf("%d = %c\t", i, i);
}
}
