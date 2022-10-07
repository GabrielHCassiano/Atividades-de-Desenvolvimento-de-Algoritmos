/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
(0,1)*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[25], nome2[25];
	
		printf("nome: ");
		scanf("%s", nome1);
		printf("nome: ");
		scanf("%s", nome2);
	
	if(strcmp(nome1, nome2) < 0 ){
		printf("%s ", nome1);
		printf("%s ", nome2);
	}else if (strcmp(nome1, nome2) > 0 ){
	
		printf("%s ", nome2);
		printf("%s ", nome1);
	}else{
		printf("%s ", nome1);
		printf("%s ", nome2);
}
}
