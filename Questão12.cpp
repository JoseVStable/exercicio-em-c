#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 12 - Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem � o mais velho. Considere que essas pessoas possuem idades diferentes\n\n\n");
	
	int Pedro, Joana, Ismael;


	printf("Digite a idade de Pedro: ");
	scanf("%d",&Pedro);
	
	printf("Digite a idade de Joana: ");
	scanf("%d",&Joana);
	
	printf("Digite a idade de Ismael: ");
	scanf("%d",&Ismael);
	
	
	if(Pedro!= Joana and Pedro !=Ismael and Joana!= Pedro and Joana!= Ismael and Ismael !=Pedro and Ismael != Joana){
	
			if(Pedro>Joana and Pedro> Ismael){
				printf("Pedro � o mais velho");
		
			}
	
			else if(Joana> Pedro and Joana>Ismael){
				printf("Joana � a mais velha");
			}
	
			else if (Ismael > Pedro and Ismael > Joana){
	
				printf("Ismael � o mais velho");
			}
	}
	
	else{
		printf("Erro! As idades precisam ser diferentes");
	}
	
	return 0;	
		
}
