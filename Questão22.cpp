#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 22- Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses dez n�meros em um vetor. 
//Para os valores dos elementos inseridos nas posi��es pares desse vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores.
// Em seguida, o programa dever� apresentar na tela os resultados.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 22- Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses dez n�meros em um vetor.");
	printf("Para os valores dos elementos inseridos nas posi��es pares desse vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores.");
	printf("Em seguida, o programa dever� apresentar na tela os resultados.\n\n");
	
	int num[10],i,soma=0,subtr=0;
	
	for(i=0; i<10; i++){
		
		printf("Digite o %d.o n�mero inteiro: ",i+1);
		scanf("%d",&num[i]);
		
		if(i%2 ==0){
			soma+=num[i];
		}
		
		else{
		
			subtr-=num[i];
		}
	}
	
	printf("\nSomat�rio dos n�meros nas posi��es pares: %d",soma);
	printf("\nSubtra��o dos n�meros nas posi��es impares: %d",subtr);

	

}
	
	
	
