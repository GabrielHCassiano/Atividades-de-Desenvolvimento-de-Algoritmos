/*25) Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos
valores � igual a m�dia dos mesmos. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, media=0, soma, num[10];
	
	for(i=0;i<10;i++){
		printf("Valores: ");
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<10;i++){
	media = (media + num[i]);
}
    media = media/10;
    
   	for(i=0;i<10;i++){
    if(num[i] == media){
    	printf("Valor igual a media: %d", media);
		break;	
	}
}
}
