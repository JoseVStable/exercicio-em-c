#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 15- Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 15- Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50\n\n");
	
	
	int i,num;
	
	printf("N�meros pares entre 1 e 50:\n");
	
	for(i=2; i<50; i+=2){
		
		printf("%d\n",i);
		
		
	}
	
	
}
