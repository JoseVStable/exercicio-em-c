#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>



//Quest�o 20- Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 20- Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica\n\n");
	
	
	char nome1[55],nome2[55];
		
		printf("Digite um nome: ");
		gets(nome1);
		
		printf("\nDigite um nome: ");
		gets(nome2);
		
		printf("nomes em ordem alfab�tica: ");
	
		if(strcmp(nome1,nome2) <0){
			printf("%s, %s",nome1,nome2);
			
		}
		
		else{
		
			printf("%s, %s",nome2,nome1);
		}
		
		
		
	
	
	
	




}
