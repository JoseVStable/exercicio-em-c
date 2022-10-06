#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


//Questão 1- Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
//primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
//da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo do primeiro número

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 1- Faça um programa que solicite 2 números e informe: a soma dos números,");
	printf("o produto do primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada ");
	printf("da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo do primeiro número\n\n");



	float num1, num2, soma, produto, quadrado, raiz, seno, modulo;
		
		printf("Digite um número: ");
		scanf("%f",&num1);
		
		printf("\nDigite outro número: ");
		scanf("%f",&num2);
	
	soma = num1 + num2;
	produto = num1*(num2*num2);
	quadrado = num1*num1;
	raiz = sqrt((num1*num1) + (num2*num2));
	seno = sin(num1 - num2);
	modulo = abs(num1);	
	
	printf("\nSoma dos números = %.1f\n",soma);
	printf("\nO produto do primeiro número pelo quadrado do segundo = %.2f \n",produto);
	printf("\n O quadrado do primeiro número = %.2f\n",quadrado);
	printf("\nA raiz quadrada da soma dos quadrados = %f\n",raiz);
	printf("\nO seno da diferença do primeiro número pelo segundo = %f\n",seno);
	printf("\nO módulo do primeiro número = %.1f\n",modulo);
		
	
}
