/*11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. (0,1)*/
#include <stdio.h>

int main(){
	
	int alunas,alunos,total;
	
	printf("Quantidades de alunas: ");
	scanf("%d", &alunas);
	printf("Quantidades de alunos: ");
	scanf("%d", &alunos);
	
	total=alunos+alunas;
	
	if(alunos>alunas){
	printf("Essa turma possui mais alunos");
	}else if(alunas>alunos){
	printf("Essa turma possui mais alunas\n");
	printf("O total de alunos: %d", total);
	}else{
	  printf("A quantidade de alunos e igual a de alunas");
}
}
