/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um número n,
calcule seu quadrado usando a soma de ímpares ao invés de produto. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, n, soma;
	
	printf("Um numero: ");
	scanf("%d", &n);
	
	
	for(i=1;i<n;i++){
	soma = soma + ((i * 2)+1);
}
	
	printf("\nO Quadrado do numero: %d", soma);
}
