#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 23-  Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene em um vetor, 
//depois o programa dever� apresentar na tela os n�meros na ordem inversa do qual foram digitados.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 23- Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene em um vetor,");
	printf("depois o programa dever� apresentar na tela os n�meros na ordem inversa do qual foram digitados.\n\n");
	
	
	
	int num[6],i;
	
	for(i=0; i<6; i++){
		
		printf("Digite o %d.o n�mero inteiro: ",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\nOrdem inversa:\n");
	
	for(i=5; i>=0; i--){
		
		printf("%d\n",num[i]);
		
	}
	

}
