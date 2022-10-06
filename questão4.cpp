#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Questão 4
//Faça um programa que lê dois valores e imprime:
//a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
//b) se o primeiro valor for maior que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
//c) se ambos forem iguais a mensagem "valores iguais"

 int main(){
 	
 	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 4- Faça um programa que lê dois valores e imprime:\na) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;\nb) se o primeiro valor for maior que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;\nc) se ambos forem iguais a mensagem 'valores iguais'\n\n");
 	
 	int valor1, valor2, crescente, descrecente, i;
 	
 	
 	printf("Digite um valor: ");
 	scanf("%d",&valor1);
 	
 	printf("\nDigite o segundo valor: ");
 	scanf("%d",&valor2); 
 	
 	
 	if(valor1<valor2){
 		printf("\nLista de valores do primeiro ate o segundo: \n ");
 		for(i=valor1; i<=valor2;i++){
 			printf("%d\n",i);
		 }
	 }
	 
	 else if(valor1>valor2){
	 	printf("\nlista dos valores do segundo ate o primeiro em ordem decrescente: \n");
	 	for(i=valor1; i>=valor2;i--){
	 		printf("%d\n",i);
		 }
	 }
	 
	 else 
	 	printf("Valores iguais"); 
	 	

 	
	
	
 }
