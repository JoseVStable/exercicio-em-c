#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 23-  Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, 
//depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 23- Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor,");
	printf("depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados.\n\n");
	
	
	
	int num[6],i;
	
	for(i=0; i<6; i++){
		
		printf("Digite o %d.o número inteiro: ",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\nOrdem inversa:\n");
	
	for(i=5; i>=0; i--){
		
		printf("%d\n",num[i]);
		
	}
	

}
