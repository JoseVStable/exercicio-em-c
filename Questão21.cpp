#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Quest�o 21- Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio. 
//Separe esses n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e �mpares, exibindo os resultados na tela.


int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabe�alho
	
	printf("Centro Universit�rio de Jo�o Pessoa\n");
	printf("Disciplina: Laborat�rio de Desenvolvimento de Algoritmos\n");
	printf("Aluno: Jos� Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUEST�O 21- Escreva um programa que leia doze n�meros do tipo inteiro ao usu�rio.");
	printf("Separe esses n�meros em pares e �mpares e os armazenem em dois outros vetores separando pares e �mpares, exibindo os resultados na tela.\n\n");
	
	
	int par[12],impar[12],num[12];
	int i, contpar=0, contimpar=0;
	
		for (i=0; i<12; i++){
			printf("Digite o %d n�mero inteiro: ",i);
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
		
		printf("\nn�meros pares: \n");
		for(i=0; i<contpar; i++){
			
			printf("%d ",par[i]);
		}
		printf("\nn�meros impares:\n");
		for(i=0; i<contimpar; i++){
			
			printf("%d ", impar[i]);
		}
		
		
	
	
	
	
}
