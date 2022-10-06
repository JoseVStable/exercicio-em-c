#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Questão 13 Dado um número positivo, crie um programa que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 13- Dado um número positivo, crie um programa que escreva todos os números ímpares menores\n e/ou iguais a esse número e maiores ou igual a um\n\n");


	int num,cont1;
	
		printf("Digite um número positivo: ");
		scanf("%d",&num);
		
		if(num%2==0){
			num-=1;
			
		}
		for(cont1=num;cont1>=1;cont1-=2){
		
			printf("%d\n",cont1);
		}
	








}
