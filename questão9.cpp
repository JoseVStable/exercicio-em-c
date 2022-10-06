#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Questão 9
//Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dosexercícios realizados por ele.
// Calcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7. 
//A partir da média, informar o conceito de acordo com a tabela:(0,1)
//Maior ou igual a 9  A
//maior ou igual a 7.5 e menor que 9 B
//maior ou igual a 6 e menor que 7.5 C
//maior ou igual a 4 e menor que 6  D
//menor que 4 D

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 9- Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dosexercícios realizados por ele.\nCalcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7.\nA partir da média, informar o conceito de acordo com a tabela:\n");
	printf("Maior ou igual a 9  A \nmaior ou igual a 7.5 e menor que 9 B \nmaior ou igual a 6 e menor que 7.5 C \nmaior ou igual a 4 e menor que 6  D \nmenor que 4 D\n\n");
	
	float nota1, nota2, nota3, media, MA;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f",&nota1);
	
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f",&nota2);
	
	
	printf("Digite a terceira nota do aluno: ");
	scanf("%f", &nota3);
	
	printf("Digite a media das notas dos exercicios realizados: ");
	scanf("%f",&media);
	
	
	MA = (nota1 + nota2*2 + nota3*3 + media)/7;
	
	printf("A media de aproveitamento: %.2f\n",MA);
	
	
	if(MA>= 9){
		printf("A");
	}
	
	else if (MA>=7.5 and MA<9){
	
		printf("B");
	}
	
	else if (MA>= 6 and MA<7.5){
	
		printf("C");
	}
		
	else if (MA>= 4 and MA<6){
	
		printf("D");
	}
		
	else
		printf("E");
	
	
	
}
