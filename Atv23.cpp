/*23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do
qual foram digitados. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, num[i];
	
	for(i=0;i<6;i++){
	printf("Digite um numero: ");
	scanf("%d", &num[i]);
}

	for(i=5;i>=0;i--)
		printf("%d ", num[i]);
	
}
