/*24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
(0,1)*/
#include <stdio.h>

int main(){
	
	int i, quantia;
	int um, cinco, dez, vinte, cinquenta, cem;
	
	printf("Quantia: ");
	scanf("%d", &quantia);
	
	cem = quantia/100;

	cinquenta = (quantia%100)/50;

	vinte = (quantia%50)/20;

	dez = ((quantia%50)%20)/10;

	cinco = ((quantia%10)%10)/5;

	um = ((quantia%10)%10)%5;


	printf("Quantidade minima de cedulas: \n");
	
	printf("Cedula de 100: %d\n", cem);
	printf("Cedula de 50: %d\n", cinquenta);
	printf("Cedula de 20: %d\n", vinte);
	printf("Cedula de 10: %d\n", dez);
	printf("Cedula de 5: %d\n", cinco);
	printf("Cedula de 1: %d", um);
			
}
