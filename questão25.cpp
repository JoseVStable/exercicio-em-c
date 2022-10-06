#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 25- Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 25- Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.\n\n");
	
	int  num[10],soma=0, i;
	float media;
	
	
	for (i=0;i<10;i++){
	
		
		printf("Digite o %d.o número inteiro: ",i+1);
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
