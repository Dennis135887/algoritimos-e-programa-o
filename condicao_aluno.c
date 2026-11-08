#include <stdio.h>
#include <stdbool.h>

/*Condição do aluno usando o operador ternário*/

int main() {
float n1,n2,media;


printf("digite nota 1: ");
scanf("%f",&n1);

printf("digite nota 2: ");
scanf("%f",&n2);

media = (n1 + n2) / 2.0;


// Usando o operador ternário para encontrar o maior número
bool condicao = (media >= 6) ? true : false;
printf("Condição do aluno: %d\n", condicao);
return 0;
}