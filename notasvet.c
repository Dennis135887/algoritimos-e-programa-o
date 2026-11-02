/*
notasvet.c


Alterar o código para:
Digitar a quantidade de notas (notas maiores do que uma (1))
Digitar as notas de acordo com a quantidade, notas válidas (0-10)
Mostrar as notas digitadas
Mostrar a soma e a média das notas,
se está aprovado ou reprovado de acordo com a média
*/

// Matheus
#include <stdio.h>

int main (){

int qtn, x;

do{
printf("Digite quantas notas deseja incluir: ");
scanf("%d", &qtn);

if (qtn < 2) printf("Valor inválido.\n");

}while(qtn < 2);

float notas[qtn], soma = 0.0, media = 0.0;

x = 0;
do{
printf("Digite a %dº nota: ", x+1);
scanf("%f", &notas[x]);

if (notas[x] < 0 || notas[x] > 10) printf("Nota inválida.\n");
else {
soma += notas[x];
x++;
}
}while(x < qtn);

media = soma/qtn;

printf("Notas = [ ");
for(int i = 0; i<qtn; i++) printf("%.1f ", notas[i]);
printf("]\n");

printf("Soma das notas: %.1f, media das notas: %.1f.\n",soma,media);
if(media >= 7.0) printf("Aprovado!\n");
else printf("Reprovado.\n");

return 0;
}

