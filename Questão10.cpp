#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Questão 10
// Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar. 
//O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar, 
//caso afirmativo informar se é ou não menorque 50.


int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçallho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 10- Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar.\nO programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar,\ncaso afirmativo informar se é ou não menor que 50.\n\n");
	
	int num;
	
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	if(num %2==0 ){
	
		printf("O número %d é par\n",num);
		
		    if (num>15){
		   
		
		     	printf("O número %d é maior que 15",num);
		    }
		     
		    else if (num<15){
			
		    	printf("O número %d é menor que 15",num);
			}	
		    
			
		
	}
	
	
	else{
	
		printf("O número %d é impar\n",num);
		
			if(num>50){
			
				printf("O número %d é maior que 50",num);
			}	
			
			else if (num<50){
			
				printf("O número %d é menor que 50",num);
			}	
				
	}
			
	
	
	
	
	
}

