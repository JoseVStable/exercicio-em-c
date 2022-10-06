#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 16 Dados um número natural n, exiba seu fatorial n!

int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 16- Dado um número natural n, exiba seu fatorial n!\n\n");
	
	int n;
	float fatorial;
	
	printf("Digite um número natural: ");
	scanf("%d",&n);
		
	printf("%d fatorial = ",n);
		
		
		for(fatorial=1; n>1; n= n-1){
		
		 fatorial = fatorial*n;
	    }
		
		
		
		printf("%.0f",fatorial);
			
		
	
 

    
	
	
	
	
	
	
	
}


