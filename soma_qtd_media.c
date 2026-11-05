#include <stdio.h>

int main()
{
    int num, soma = 0, qtd = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    while (num >= 0) {
        soma += num;
        qtd++; // Incrementa a quantidade de notas válidas digitadas
        
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    
    printf("\nSomatorio: %d", soma);
    printf("\nQuantidade de notas digitadas: %d", qtd);
    
    // Verifica se foi digitada pelo menos uma nota para evitar divisão por zero
    if (qtd > 0) {
        float media = (float) soma / qtd;
        printf("\nMedia das notas: %.2f\n", media);
    } else {
        printf("\nNenhuma nota valida foi digitada para o calculo da media.\n");
    }
    
    return 0;
}