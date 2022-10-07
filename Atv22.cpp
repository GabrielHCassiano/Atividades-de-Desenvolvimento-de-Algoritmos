/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, soma=0, sub , num[10];
	
	for(i=1;i<=10;i++){
		printf("Numeros %d: ", i);
		scanf("%d", &num[i]);
	}
	
	for(i=1;i<=10;i++){
	if(num[i]%2==0){
		soma = soma + num[i];
	}else if(num[i]%2==1){
		sub = sub - (num[i]);
}
}
		printf("\nSoma: %d\n", soma);
		
		 
		printf("\nSubtracao: %d\n", sub);
}
