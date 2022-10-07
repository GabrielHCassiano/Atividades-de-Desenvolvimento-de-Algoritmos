/*Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127. (0,1)*/
#include <stdio.h>

int main(){
	
	int i;
	
	for(i=0;i<=127;i++){
	 if(i%10==0)
		printf("\n");
		printf("%d = %c\t", i, i);
}
}
