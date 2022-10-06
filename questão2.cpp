#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//QUESTÃO 2
//Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin: 

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 2- Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin\n\n");
	
	float fahrenheit, celsius, kelvin;
	
	printf("Digite o valor da temperatura em fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit - 32)/1.8;
	kelvin = (fahrenheit - 32) *5/9 + 273;
	
	
	printf("%.2f fahrenheit em celsius é: %.2f\n",fahrenheit, celsius);
	printf("%.2f fahrenheit em kelvin é: %.2f \n", fahrenheit, kelvin);
	
}
