#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 25- Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos valores � igual a m�dia dos mesmos.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 25- Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos valores � igual a m�dia dos mesmos.\n\n");
	
	int  num[10],soma=0, i;
	float media;
	
	
	for (i=0;i<10;i++){
	
		
		printf("Digite o %d.o n�mero inteiro: ",i+1);
		scanf("%d",&num[i]);
		
		soma = soma + num[i];
		
		
	}
	
	media = soma/10.;
	
	printf("A media = %.2f\n",media);
	
	printf("Valor igual a media:\n");
	
		for(i=0;i<10;i++){
	
			if(num[i]==media)
			printf(" %d\n",num[i]);
	}
		
	
			
		
	
	
	
	
	
	
	
		
		
		
	
	
	
}
