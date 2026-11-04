/*
Usando ternario
Solicitar a entrada de um numero inteiro
Verificar se o número é PAR ou ÍMPAR

*/

#include <stdio.h>
int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    (num%2==0)?printf("Par"):printf("Ímpar");
   
    return 0;
}