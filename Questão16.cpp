#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 16 Dados um n�mero natural n, exiba seu fatorial n!

int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 16- Dado um n�mero natural n, exiba seu fatorial n!\n\n");
	
	int n;
	float fatorial;
	
	printf("Digite um n�mero natural: ");
	scanf("%d",&n);
		
	printf("%d fatorial = ",n);
		
		
		for(fatorial=1; n>1; n= n-1){
		
		 fatorial = fatorial*n;
	    }
		
		
		
		printf("%.0f",fatorial);
			
		
	
 

    
	
	
	
	
	
	
	
}


