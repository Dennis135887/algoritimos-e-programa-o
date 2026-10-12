
#include <stdio.h>

int main()
{
    /*Programa Alunos com array usando do while e while*/
    int i,qtd;
    
    do{
        printf("Digite quantidade de alunos: ");
        scanf("%d",&qtd);
        if(qtd <= 0){
            printf("quantidade %d invalida de alunos.",qtd);
        }
    }while(qtd <= 0);
    
    double nota1[qtd],nota2[qtd],media[qtd];
    char nome[qtd][100];
    
    
    i = 0;
    while(i < qtd){
        printf("\nDigite nome do aluno(a): ");
        scanf(" %s",nome[i]);
        do{
            
            printf("Digite a nota1[%d] do aluno(a) %s: ",i+1,nome[i]);
            scanf("%lf", &nota1[i]);
            printf("Digite a nota2[%d] do aluno(a) %s: ",i+1,nome[i]);
            scanf("%lf", &nota2[i]);
            if(nota1[i] < 0 || nota1[i] > 10 || nota2[i] < 0 || nota2[i] > 10){
                printf("\nnota invalida.");
            }
            
          
           
        
        }while (nota1[i] < 0 || nota1[i] > 10 || nota2[i] < 0 || nota2[i] > 10);
         media[i] = (nota1[i] + nota2[i]) / 2.0;
         i++;
    }
    
  
       // 4. Exibe os resultados de todos os alunos cadastrados
    printf("\n--- RESULTADOS DA TURMA ---\n");
    for (i = 0; i < qtd; i++) {
        printf("Media do aluno(a) %s e %.1f\n", nome[i], media[i]);
    }

    return 0;
}
