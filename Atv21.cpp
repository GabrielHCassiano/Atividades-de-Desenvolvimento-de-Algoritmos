/*21) Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio. Separe esses
n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e
�mpares, exibindo os resultados na tela. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, num[12], par, impar;
	
	for(i=0;i<12;i++){	
		printf("Coloque um numero: ");
		scanf("%d", &num[i]);
}
  	for(i=0;i<12;i++){	
	if(num[i]%2==0){ 
	printf("%d ", num[i]);	
}  	
}	printf("\n");
	for(i=0;i<12;i++){
	if(num[i]%2==1	)
	printf("%d ", num[i]);	
}
}
