/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. (0,1)*/
#include <stdio.h>

int main(){
	
	int pedro,joana,ismael;
	
	printf("Idade de Pedro: ");
	scanf("%d", &pedro);
	printf("Idade de Joana: ");
	scanf("%d", &joana);
	printf("Idade de Ismael: ");
	scanf("%d", &ismael);
	
	if(pedro>joana && pedro>ismael)
	printf("Pedro e mais velho");
	if(joana>pedro && joana>ismael)
	printf("Joana e mais velha");
	if(ismael>pedro && ismael>joana)
	printf("Ismael e mais velho");
	
}
