/*
Arquivo: 
ordena4.c
Compilar, digitar no Terminal
	gcc ordena4.c -o ordena4 && ./ordena4
Exercício

Solicitar a entrada de 4 número inteiros para as variáveis a, b, c, d

Imprimir os valores para a, b, c, d
a=6
b=4
c=2
d=1

Colocar os valores em ordem crescente

Imprimir novamente os valores a, b, c, d
Imprimir a quantidade de IFs utilizados na ordenação das 4 variáveis

ordena4.c


*/
#include <stdio.h>


int main(){
    int a,b,c,d,aux,num=0;
    printf("Digite o valor de a: ");
    scanf("%d", &a);    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de d: ");
    scanf("%d", &d);


    printf("Valores:           a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }
    if(b>c){
        aux=b;
        b=c;
        c=aux;
        num++;
    }
    if(c>d){
        aux=c;
        c=d;
        d=aux;
        num++;
    }
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }  
    if(b>c){
        aux=b;
        b=c;
        c=aux;
        num++;
    }
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }  


    printf("Valores Ordenados: a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
    printf("Quantidade de IFs utilizados: %d\n",num);
    return 0;


}
