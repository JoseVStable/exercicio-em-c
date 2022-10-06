#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//QUESTÃO 14- A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tcé a temperatura em Celsius e Tf em Fahrenheit. 
//Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de1 em 1
int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 14- A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc: é a temperatura em Celsius e Tf em Fahrenheit. ");
	printf("Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1\n\n");
	
	
	
	
	float graus,fahr;
	
    for (graus=40; graus<76;graus++){
		
	  fahr = (graus *1.8) + 32;
		
		
		
		printf("%.1f Celsius = %.1f Fahrenheit\n",graus,fahr);
	}
}
