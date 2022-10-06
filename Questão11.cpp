#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Questão 11
//Codifique um programa que leia a quantidade de alunas e de alunos. 
//Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas.
// Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
//O programa deve verificar se a quantidade de alunos é igual a de alunas


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Cabeçalho
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 11- Codifique um programa que leia a quantidade de alunas e de alunos.\nDepois esse programa deve informar se essa turma possui mais alunos ou mais alunas.\nSe essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.\nO programa deve verificar se a quantidade de alunos é igual a de alunas\n\n");
	
	int alunos, alunas,total;
	
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	printf("Digite a quantidade de alunas: ");
	scanf("%d",&alunas);
	
	total = alunos+ alunas;
	
	if (alunos>alunas){
		printf("A turma possui mais alunos do que alunas");
	}
	
	else if (alunos<alunas){
			printf("A turma possui mais alunas do que alunos.\n Quantidade total de alunos na turma: %d",total);
			
	}
	
	else{
		printf("A quantidade de alunos e alunas é igual.\n Alunos:%d  Alunas:%d",alunos,alunas);
	}
	
	
	
	
}

