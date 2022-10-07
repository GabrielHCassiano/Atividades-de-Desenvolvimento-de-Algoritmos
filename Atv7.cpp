/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova. (0,1)*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nota1, nota2;
	int i;	
	float media;
	
 	do{
	printf("Nota da primeira prova: ");
	scanf("%d", &nota1);
		if(nota1 == 50){
	   	exit(0);}
		}while((nota1<0) || (nota1>10));
	do{
	printf("Nota da segunda prova: ");
	scanf("%d", &nota2);
	}while((nota2<0) || (nota2>10));
//ajuda (as notas têm de estar no intervalo [0 10])
    
	media = (nota1 + nota2)/2;
	
	
	printf("Media: %.1f", media);
}

