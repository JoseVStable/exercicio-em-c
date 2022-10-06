#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 8- Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9).
// Este número deve ser sempre ímpar.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 8- Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). ");
	printf("Este número deve ser sempre ímpar.\n\n");
	
	int num, i, k;
	
	printf("Digite um número impar: ");
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
