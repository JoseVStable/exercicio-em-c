#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 12 - Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes\n\n\n");
	
	int Pedro, Joana, Ismael;


	printf("Digite a idade de Pedro: ");
	scanf("%d",&Pedro);
	
	printf("Digite a idade de Joana: ");
	scanf("%d",&Joana);
	
	printf("Digite a idade de Ismael: ");
	scanf("%d",&Ismael);
	
	
	if(Pedro!= Joana and Pedro !=Ismael and Joana!= Pedro and Joana!= Ismael and Ismael !=Pedro and Ismael != Joana){
	
			if(Pedro>Joana and Pedro> Ismael){
				printf("Pedro é o mais velho");
		
			}
	
			else if(Joana> Pedro and Joana>Ismael){
				printf("Joana é a mais velha");
			}
	
			else if (Ismael > Pedro and Ismael > Joana){
	
				printf("Ismael é o mais velho");
			}
	}
	
	else{
		printf("Erro! As idades precisam ser diferentes");
	}
	
	return 0;	
		
}
