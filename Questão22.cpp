#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 22- Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor. 
//Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores.
// Em seguida, o programa deverá apresentar na tela os resultados.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 22- Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor.");
	printf("Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores.");
	printf("Em seguida, o programa deverá apresentar na tela os resultados.\n\n");
	
	int num[10],i,soma=0,subtr=0;
	
	for(i=0; i<10; i++){
		
		printf("Digite o %d.o número inteiro: ",i+1);
		scanf("%d",&num[i]);
		
		if(i%2 ==0){
			soma+=num[i];
		}
		
		else{
		
			subtr-=num[i];
		}
	}
	
	printf("\nSomatório dos números nas posições pares: %d",soma);
	printf("\nSubtração dos números nas posições impares: %d",subtr);

	

}
	
	
	
