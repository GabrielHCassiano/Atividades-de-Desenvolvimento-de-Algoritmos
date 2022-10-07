/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?". (0,1)*/
#include <stdio.h>

int main(){
	
	//int;
	float valor, menor, maior;
	
	printf("O valor do produto: ");
	scanf("%f", &valor);
	
   while (valor<100){
	menor = valor;
	menor = menor * 0.1;
	menor = menor + valor;
	printf("\n%.2f", menor); 
	break;  
}
   while (valor>=100){
	maior = valor;   
	maior = maior * 0.2;
	maior = maior + valor;
	printf("\n%.2f", maior);
	break;  
}
}
