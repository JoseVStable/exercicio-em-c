#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//Questão 7- implemente um programa que solicita as notas das duas provas feitas por cada um dos
//alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas. 
//O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	//Cabeçalho
	
	printf("Centro Universitário de João Pessoa\n");
	printf("Disciplina: Laboratório de Desenvolvimento de Algoritmos\n");
	printf("Aluno: José Vieira Stable Neto  -- RGM: 30840252\n\n");
	printf("QUESTÃO 7- implemente um programa que solicita as notas das duas provas feitas por cada um dos alunos de uma turma ");
	printf("(as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas. ");
	printf("O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova\n\n");
	
	
	float not1,not2,media;
	
	do{

        do{
            printf("Digite a nota da primeira prova: ");
            scanf("%f",&not1);

            if(not1 == 50){
                break;
            }

            printf("Digite a nota da segunda prova: ");
            scanf("%f",&not2);

            if((not1 < 0) || (not1 > 10) || (not2 < 0) || (not2 >10)){
                printf("Digite novamente as notas!\n\n");
            }

        }while((not1 < 0) || (not1 > 10) || (not2 < 0) || (not2 >10));

        if(not1 == 50){
            break;
        }

        media = (not1 + not2)/2;
        printf("Media = %.2f\n\n",media);

    }while(not1 != 50);

return(0);
}


	
