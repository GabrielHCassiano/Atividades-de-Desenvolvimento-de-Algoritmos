/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo
inteiro. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, maior,
	elemento[5];
	
	for(i=0;i<5;i++){
		printf("Coloque o elemento: ");
		scanf("%d", &elemento[i]);
	}
	
	for(i=0;i<5;i++){
	if(maior < elemento[i])
	   maior = elemento[i];
}
	
	printf("Maior elemento: %d", maior);
}
