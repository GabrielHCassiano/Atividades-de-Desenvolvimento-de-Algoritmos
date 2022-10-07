/*16) Dados um número natural n, exiba seu fatorial n!. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, n, fat;
	
	printf("Numero: ");
	scanf("%d", &n);
		
	for(i=1; i<=n; i++){
	fat *= i;
	}
	
	printf("Fatotial: %d", fat);
}
