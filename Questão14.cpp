#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//QUEST�O 14- A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc� a temperatura em Celsius e Tf em Fahrenheit. 
//Fa�a um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de1 em 1
int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 14- A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc: � a temperatura em Celsius e Tf em Fahrenheit. ");
	printf("Fa�a um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1\n\n");
	
	
	
	
	float graus,fahr;
	
    for (graus=40; graus<76;graus++){
		
	  fahr = (graus *1.8) + 32;
		
		
		
		printf("%.1f Celsius = %.1f Fahrenheit\n",graus,fahr);
	}
}
