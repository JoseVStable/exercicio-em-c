#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//QUEST�O 5
// Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 5- Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127\n\n");
	
	
	int i;
	
	
	for (i=0; i<128; i++){
	
	
	printf("Deci= %d ; Oct= %o ; Hex= %x ; Char= %c\n",i,i,i,i);
  }  
}
