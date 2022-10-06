#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 17- O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. 
//Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.


int main(){

		
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 17- O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos.\n");
	printf("Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.\n\n");
	
	
	int n, cont, soma = 1, quadrado=0;
	
	printf("Digite um número: ");
	scanf("%d",&n);
	
	for(cont=0; cont<n; cont++){
		quadrado += soma;
		soma += 2;
	}
	
	printf("O quadrado de %d é %d",n, quadrado);
	
	
	
}

  
 
