#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//QUESTÃO 6
//Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
// OBS: não use o comando "if"ou o operador de condição "?".

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 6- Faça um programa que lê o preço de um produto e inflaciona esse preço em 10 porcento se ele for menor que 100 e em 20 porcento se ele for maior ou igual a 100.\nnão use o comando 'if' ou o operador de condição '?'\n\n");
	
	int valor, op;
	float preco;
	
	
	printf("valor do produto: ");
	scanf("%d",&valor);
	printf("Digite: 1 - se o valor do produto é menor que 100\tDigite: 2- se o valor do produto é maior ou igual a 100 \n");
	scanf("%d",&op);
	
	
	switch(op){
		
		case 1: 
			preco = valor*1.1;
			printf("Com a inflação, o valor final do produto fica: %.2f ",preco);
		break;
			
		case 2:
			preco = valor * 1.2;
			printf("Com a inflação, o valor final do produto fica: %.2f ",preco);
		break;
		
		default:
			printf("opção inválida");
		break;
		
		
			
	}
	
	
	
	
	
}
