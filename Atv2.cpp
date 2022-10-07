/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin: (0,1)*/
#include <stdio.h>

int main(){
	
	float f, c, k;

	printf("Coloque a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = (f-32) / 1.8;
	k = (f-32) * 5/9 + 273,15;
	
	printf("Temperatura em Celsius: %.2f\n", c);
	printf("Temperatura em Kelvin: %.2f", k);
}
