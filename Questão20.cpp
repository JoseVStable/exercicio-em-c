#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>



//Questão 20- Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 20- Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética\n\n");
	
	
	char nome1[55],nome2[55];
		
		printf("Digite um nome: ");
		gets(nome1);
		
		printf("\nDigite um nome: ");
		gets(nome2);
		
		printf("nomes em ordem alfabética: ");
	
		if(strcmp(nome1,nome2) <0){
			printf("%s, %s",nome1,nome2);
			
		}
		
		else{
		
			printf("%s, %s",nome2,nome1);
		}
		
		
		
	
	
	
	




}
