#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Quest�o 10
// Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par ou �mpar. 
//O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar, 
//caso afirmativo informar se � ou n�o menorque 50.


int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�allho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 10- Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par ou �mpar.\nO programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar,\ncaso afirmativo informar se � ou n�o menor que 50.\n\n");
	
	int num;
	
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	if(num %2==0 ){
	
		printf("O n�mero %d � par\n",num);
		
		    if (num>15){
		   
		
		     	printf("O n�mero %d � maior que 15",num);
		    }
		     
		    else if (num<15){
			
		    	printf("O n�mero %d � menor que 15",num);
			}	
		    
			
		
	}
	
	
	else{
	
		printf("O n�mero %d � impar\n",num);
		
			if(num>50){
			
				printf("O n�mero %d � maior que 50",num);
			}	
			
			else if (num<50){
			
				printf("O n�mero %d � menor que 50",num);
			}	
				
	}
			
	
	
	
	
	
}

