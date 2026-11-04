/*
Lição de casa:
Criar um código em c para
troca de valores entre duas variáveis:
Início
a = 9
b = 5

Depois
a = 5
b = 9
*/

#include <stdio.h>
int main(){
    int a, b, aux;
    a = 9;
    b = 5;
    printf("Inicio:\n");
    printf("a = %d\nb = %d\n",a,b);
    aux = a;
    a = b;
    b = aux;
    printf("Depois:\n");
    printf("a = %d\nb = %d\n",a,b);

    return 0;
}