#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 8- Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9).
// Este n�mero deve ser sempre �mpar.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 8- Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9). ");
	printf("Este n�mero deve ser sempre �mpar.\n\n");
	
	int num, i, k;
	
	printf("Digite um n�mero impar: ");
	scanf("%d",&num);
	
	if (num %2==0){
		printf("ERRO! \n");
	}
	
	else{
		for(i=0; i<=(num/2); i++){
			for(k =i + 1; k <= num - i; k++){
				printf("%d ",k);
			}
			
			printf("\n");
			for(k= 0 ; k < i + 1; k++){
				printf("  ");
			}
		}
	}
	


	
}
