#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


//Quest�o 1- Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do
//primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada
//da soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulo do primeiro n�mero

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 1- Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros,");
	printf("o produto do primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada ");
	printf("da soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulo do primeiro n�mero\n\n");



	float num1, num2, soma, produto, quadrado, raiz, seno, modulo;
		
		printf("Digite um n�mero: ");
		scanf("%f",&num1);
		
		printf("\nDigite outro n�mero: ");
		scanf("%f",&num2);
	
	soma = num1 + num2;
	produto = num1*(num2*num2);
	quadrado = num1*num1;
	raiz = sqrt((num1*num1) + (num2*num2));
	seno = sin(num1 - num2);
	modulo = abs(num1);	
	
	printf("\nSoma dos n�meros = %.1f\n",soma);
	printf("\nO produto do primeiro n�mero pelo quadrado do segundo = %.2f \n",produto);
	printf("\n O quadrado do primeiro n�mero = %.2f\n",quadrado);
	printf("\nA raiz quadrada da soma dos quadrados = %f\n",raiz);
	printf("\nO seno da diferen�a do primeiro n�mero pelo segundo = %f\n",seno);
	printf("\nO m�dulo do primeiro n�mero = %.1f\n",modulo);
		
	
}
