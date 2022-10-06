#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//QUESTÃO 5
// Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 5- Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127\n\n");
	
	
	int i;
	
	
	for (i=0; i<128; i++){
	
	
	printf("Deci= %d ; Oct= %o ; Hex= %x ; Char= %c\n",i,i,i,i);
  }  
}
