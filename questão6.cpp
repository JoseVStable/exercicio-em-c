#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//QUEST�O 6
//Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
// OBS: n�o use o comando "if"ou o operador de condi��o "?".

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 6- Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10 porcento se ele for menor que 100 e em 20 porcento se ele for maior ou igual a 100.\nn�o use o comando 'if' ou o operador de condi��o '?'\n\n");
	
	int valor, op;
	float preco;
	
	
	printf("valor do produto: ");
	scanf("%d",&valor);
	printf("Digite: 1 - se o valor do produto � menor que 100\tDigite: 2- se o valor do produto � maior ou igual a 100 \n");
	scanf("%d",&op);
	
	
	switch(op){
		
		case 1: 
			preco = valor*1.1;
			printf("Com a infla��o, o valor final do produto fica: %.2f ",preco);
		break;
			
		case 2:
			preco = valor * 1.2;
			printf("Com a infla��o, o valor final do produto fica: %.2f ",preco);
		break;
		
		default:
			printf("op��o inv�lida");
		break;
		
		
			
	}
	
	
	
	
	
}
