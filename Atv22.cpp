/*22) Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse
vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em
seguida, o programa dever� apresentar na tela os resultados. (0,1)*/
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
