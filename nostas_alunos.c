#include <stdio.h>

int main() {
    int n = 0;
    
    // 1. Validação da quantidade de notas (> 0)
    while (n <= 0) {
        printf("Digite a quantidade de notas: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("A quantidade de notas deve ser maior que 0.\n");
        }
    }

    int i = 1;
    double nota;
    double soma = 0.0; // Inicializada com 0

    // 2. Leitura e acúmulo de cada nota
    while (i <= n) {
        printf("Digite a nota %d: \n", i);
        scanf("%lf", &nota);

        // Validação da nota (0 a 10)
        while (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n");
            printf("Digite a nota %d novamente: ", i);
            scanf("%lf", &nota);
        }

        soma += nota; // Acumula o valor correto da nota
        i++;          // Incrementa o contador
    }

    // 3. Cálculo da média final fora do laço
    double media = soma / n;

    printf("------------------\n");
    printf("Soma: %.1f\n", soma);
    printf("Média: %.1f\n", media);

    return 0;
}