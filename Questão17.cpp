#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 17- O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos. 
//Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto.


int main(){

		
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 17- O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos.\n");
	printf("Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto.\n\n");
	
	
	int n, cont, soma = 1, quadrado=0;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	
	for(cont=0; cont<n; cont++){
		quadrado += soma;
		soma += 2;
	}
	
	printf("O quadrado de %d � %d",n, quadrado);
	
	
	
}

  
 
