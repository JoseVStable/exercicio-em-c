#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 15- Faça um programa que mostre todos os números pares existentes entre 1 e 50.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 15- Faça um programa que mostre todos os números pares existentes entre 1 e 50\n\n");
	
	
	int i,num;
	
	printf("Números pares entre 1 e 50:\n");
	
	for(i=2; i<50; i+=2){
		
		printf("%d\n",i);
		
		
	}
	
	
}
