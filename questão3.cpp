#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

//QUEST�O 3
//Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse mesmo n�mero nas bases octal e hexadecimal.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 3- Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse mesmo n�mero nas bases octal e hexadecimal.\n\n");
	
	int decimal;
	

//entrada
// pega um numero na base decimal do usuario
	
	printf("Digite um numero na base decimal: ");
	scanf("%d",&decimal);

//processamento
//utilizando %o e %x o numero � convertido sem precisar fazer nenhum calculo
	
	
	printf("O valor decimal %d em Octal: %o\n",decimal,decimal); 
	printf("O valor decimal %d em Hexadecimal: %x\n",decimal,decimal);
	
	
// saida
//mostrar o numero ja convertido em octal e hexadecimal
	
	
	
	
}
