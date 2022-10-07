/*14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc
é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1. (0,1)*/
#include <stdio.h>

int main(){
	
	float Tf, Tc;
	
	Tc={(Tf-32)*(5/9)};
	
	for(Tf=40;Tf<=75;Tf++){
		printf("%.0f F = ", Tf);	
				
	Tc = (Tf-32)*5/9;
		
		printf("%.1f C \n", Tc);

}	
}
