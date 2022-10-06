#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 19- Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. 

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 19- Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro.\n\n");
	
	
	
	int num[5],i, maior=0;
	
	for(i=0;i<5;i++){
		
		printf("Digite o %d.o número: ",i+1);
		scanf("%d",&num[i]);
		
	}
	
	for(i=0; i<5; i++){
		
		if(num[i]>maior){
		
			maior = num[i];
		}
		
			
	}
	
	
	
	
	printf("\nO maior número do vetor é: %d\n\n",maior);



	
}
