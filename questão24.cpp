#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 24- Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. 
//Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais
int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 24- Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia.\n");
	printf("Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais\n\n");
	
	
	int valor, v100,v50, v20, v10, v5, v1;
	
	printf("Quanto você quer sacar?\n");
	scanf("%d",&valor);
	
	v100 = valor/100;
	valor= valor - valor / 100*100;
	
	
	v50 = valor/50;
	valor = valor % 50;
	
	v20 = valor/20;
	valor = valor % 20;
	
	v10 = valor/10;
	valor = valor % 10;
	
	v5 = valor/5;
	valor = valor % 5;
	
	v1 = valor/1;
	valor = valor % 1;
	
	
	printf("Quantidade de cédulas de 100: %d\n",v100);
	printf("Quantidade de cédulas de 50: %d\n",v50);
	printf("Quantidade de cédulas de 20: %d\n",v20);
	printf("Quantidade de cédulas de 10: %d\n",v10);
	printf("Quantidade de cédulas de 5: %d\n",v5);
	printf("Quantidade de cédulas de 1: %d\n",v1);
	

	
	
	
	
	
}
