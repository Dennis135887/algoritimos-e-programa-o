/*
ARTHUR 
*/

#include <stdio.h>

int main() {
int q = 0;

do {
printf("Informe a quantidade de notas: ");
scanf("%d", &q);
if (q<2)
printf("Quantidade inválida! Valor informado: %d \n", q);
} while (q<2);

float notas[q], soma;

for (int i=0; i<q; i++) {
do {
printf("Informe a %dª nota: ", i+1);
scanf("%f", &notas[i]);
if (notas[i]<0 || notas[i]>10)
printf("Nota inválida! Valor informado: %.1f \n", notas[i]);
} while (notas[i]<0 || notas[i]>10);
}

printf("\nRESULTADOS:\n\n");
for (int i=0; i<sizeof(notas)/sizeof(notas[0]);i++) {
printf("%dª nota: %.1f \n", i+1, notas[i]);
soma += notas[i];
}

printf("Soma: %.1f \nMédia: %.1f \n", soma, soma/q);
if (soma/q > 5)
printf("O aluno foi aprovado! \n");
else
printf("O aluno foi reprovado :/ \n");

return 0;
}