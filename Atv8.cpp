/*8) Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero
m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar. (0,1)
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5*/
#include <stdio.h>

int main(){
	
	int max;
	int l, c;
	

	printf("O numero maximo: ");
	scanf("%d", &max);

	
	if(max%2==0){
		
	}else
	
	
	for(l=0;l<=(max/2)+1;l++){
		
	 for(c=l+1;c<=max-l;c++){
	 	
		printf("%d ", c);
}

		printf("\n");

	for (c=0; c<(l+1) * 2;c++)
		printf(" ");
}
}

