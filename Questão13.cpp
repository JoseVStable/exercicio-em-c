#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Quest�o 13 Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares menores e/ou iguais a esse n�mero e maiores ou igual a um

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 13- Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares menores\n e/ou iguais a esse n�mero e maiores ou igual a um\n\n");


	int num,cont1;
	
		printf("Digite um n�mero positivo: ");
		scanf("%d",&num);
		
		if(num%2==0){
			num-=1;
			
		}
		for(cont1=num;cont1>=1;cont1-=2){
		
			printf("%d\n",cont1);
		}
	








}
