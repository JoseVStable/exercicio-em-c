#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//QUEST�O 2
//Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin: 

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 2- Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin\n\n");
	
	float fahrenheit, celsius, kelvin;
	
	printf("Digite o valor da temperatura em fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit - 32)/1.8;
	kelvin = (fahrenheit - 32) *5/9 + 273;
	
	
	printf("%.2f fahrenheit em celsius �: %.2f\n",fahrenheit, celsius);
	printf("%.2f fahrenheit em kelvin �: %.2f \n", fahrenheit, kelvin);
	
}
