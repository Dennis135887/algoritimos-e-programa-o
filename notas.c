/*
gcc notas.c -o notas && ./notas
Solicitar a entrada da quantidade de notas
Aceitar apenas se for um número > 0
Caso contrário, imprimir número incorreto
Digitar a quantidade novamente


Solicitar a entrada de uma nota
Aceitar apenas se for um valor entre 0 e 10
Caso contrário, imprimir valor da nota incorreta
Digitar a nota novamente


*/
#include <stdio.h>
int main(){
    int qtd,i;
    float nota,soma;
    do{
        printf("Digite a quantidade de notas: ");
        scanf("%d", &qtd);
        if(qtd<=0)
            printf("Quantidade incorreta, qtd: %d\n",qtd);
    }while(qtd<=0);
    i=0;
    soma=0;
    while(i<qtd){
        do{
            printf("Digite a nota%d: ",i+1);
            scanf("%f", &nota);
            if(nota<0 || nota>10)
                printf("Nota incorreta, nota: %.1f\n",nota);
            else{
                soma+=nota;
                i++;
            }
        }while(nota<0 || nota>10);
    }
    printf("Soma: %.1f\n",soma);
    printf("Media: %.1f\n",soma/qtd);
    return 0;
}

