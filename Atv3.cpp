/*3) Escreva um programa que leia um n�mero na base decimal e em seguida 
imprima esse mesmo n�mero nas bases octal e hexadecimal. (0,1)*/
#include <stdio.h>

int main(){
	
	int b;
	
	printf("Digite um numero na basa decimal: ");
	scanf("%d", &b);
	
	
	
	printf("Em base octal: %o", b);
	printf("\n");
	printf("Em base hexadicimal: %x", b);
	
}
