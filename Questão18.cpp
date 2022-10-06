#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 18- Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina.
// As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
//que as notas são informadas corretamente no intervalo de 1 a 10.

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 18- Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina.\n");
	printf("As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter: a soma das notas,\n");
	printf("a média das notas, a maior nota, a menor nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10.\n\n");


	float nota,soma=0, maior=0, menor=10;
	int cont=1;
	
	
	do{
	
		
		
		printf("Digite a  %d.a nota: ",cont);
		scanf("%f",&nota);
		
		while (nota<0 || nota>10){
			
			printf("Erro! A nota tem que estar entre 0 e 10.\nDigite novamente: ");
			scanf("%f",&nota);
		}
		
		soma = soma + nota;
		
		if (nota>maior)
			maior=nota;
			
		
		if (nota<menor)
			menor=nota;
		cont++;		
		
	}while (cont<=10);
	
	printf("\nMedia das notas = %.2f\n",(soma/10));
	printf("\nSoma das notas = %.2f\n",soma);
	printf("\nA maior nota foi = %.2f\n",maior);
	printf("\nA menor nota foi = %.2f\n",menor);
	
		
		





	
}


