#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 21- Escreva um programa que leia doze números do tipo inteiro ao usuário. 
//Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 21- Escreva um programa que leia doze números do tipo inteiro ao usuário.");
	printf("Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela.\n\n");
	
	
	int par[12],impar[12],num[12];
	int i, contpar=0, contimpar=0;
	
		for (i=0; i<12; i++){
			printf("Digite o %d número inteiro: ",i);
			scanf("%d",&num[i]);
			
	
			if(num[i] % 2==0){
				
				par[contpar] = num[i];
				contpar++;
			
			}
		
			else{
			
				impar[contimpar] = num[i];
				contimpar++;
			}
		
		}
		
		printf("\nnúmeros pares: \n");
		for(i=0; i<contpar; i++){
			
			printf("%d ",par[i]);
		}
		printf("\nnúmeros impares:\n");
		for(i=0; i<contimpar; i++){
			
			printf("%d ", impar[i]);
		}
		
		
	
	
	
	
}
