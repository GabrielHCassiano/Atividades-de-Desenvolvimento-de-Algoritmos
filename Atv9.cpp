/*9) Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dos
exerc�cios realizados por ele. Calcular a m�dia de aproveitamento, usando a f�rmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia, informar o conceito de acordo com a tabela:
(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/
#include <stdio.h>

int main(){
	
	int N1,N2,N3;
	float ME,MA;
	
	printf("Nota 1: ");
	scanf("%d", &N1);
	printf("Nota 2: ");
	scanf("%d", &N2);
	printf("Nota 3: ");
	scanf("%d", &N3);
	printf("Media: ");
	scanf("%f", &ME);
	
	MA = (N1 + N2*2 + N3*3 + ME)/7;
		
	if(MA>=9)
	printf("A");
	else if((MA>=7.5) && (MA<9))
	printf("B");
	else if((MA>=6) && (MA<7.5))
	printf("C");
	else if((MA>=4) && (MA<6))
	printf("D");
	else if(MA<4)
	printf("E");
}
