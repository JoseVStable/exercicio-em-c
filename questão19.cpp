#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 19- Escreva um programa para informar o maior elemento de um vetor de 5 posi��es do tipo inteiro. 

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 19- Escreva um programa para informar o maior elemento de um vetor de 5 posi��es do tipo inteiro.\n\n");
	
	
	
	int num[5],i, maior=0;
	
	for(i=0;i<5;i++){
		
		printf("Digite o %d.o n�mero: ",i+1);
		scanf("%d",&num[i]);
		
	}
	
	for(i=0; i<5; i++){
		
		if(num[i]>maior){
		
			maior = num[i];
		}
		
			
	}
	
	
	
	
	printf("\nO maior n�mero do vetor �: %d\n\n",maior);



	
}
