/*
Crie um código que solicite a quantidade de números inteiros a ser digitada(validado).
O código deverá mostrar como saída todos os números digitados, 
o maior número e o menor número digitado.
Matheus
*/
#include <stdio.h>

int main(){

int qtd;

do{
printf("Digite quantos números deseja inserir: ");
scanf("%d", &qtd);

if (qtd < 2) printf("Quantidade insuficiente.\n");
}while(qtd < 2);

int valores[qtd], maior = 0, menor = 0;

for(int i = 0; i < qtd; i++){
printf("Digite o %dº número: ", i+1);
scanf("%d", &valores[i]);
if(i==0){
        maior=valores[0];
        menor=valores[0];
    }
maior = (maior < valores[i]) ? valores[i] : maior;
menor = (menor > valores[i]) ? valores[i] : menor;
}

printf("\nValores digitados: ");
for(int i = 0; i<qtd; i++) printf("%d ", valores[i]);
printf("\n\n");
printf("Maior valor: %d\nMenor valor: %d\n", maior, menor);

return 0;
}