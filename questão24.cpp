#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 24- Codifique um programa que indique a quantidade m�nima de c�dulas equivalente a uma dada quantia. 
//Considere apenas valores inteiros e c�dulas de 1, 5, 10, 20, 50 e 100 reais
int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 24- Codifique um programa que indique a quantidade m�nima de c�dulas equivalente a uma dada quantia.\n");
	printf("Considere apenas valores inteiros e c�dulas de 1, 5, 10, 20, 50 e 100 reais\n\n");
	
	
	int valor, v100,v50, v20, v10, v5, v1;
	
	printf("Quanto voc� quer sacar?\n");
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
	
	
	printf("Quantidade de c�dulas de 100: %d\n",v100);
	printf("Quantidade de c�dulas de 50: %d\n",v50);
	printf("Quantidade de c�dulas de 20: %d\n",v20);
	printf("Quantidade de c�dulas de 10: %d\n",v10);
	printf("Quantidade de c�dulas de 5: %d\n",v5);
	printf("Quantidade de c�dulas de 1: %d\n",v1);
	

	
	
	
	
	
}
