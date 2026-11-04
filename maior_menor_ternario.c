#include <stdio.h>
int main() {
    int a = 500, b = 20, c = 100;

    // Usando o operador ternário para encontrar o maior número
    int maior = (a > b) ? a : b;
    maior = (maior > c) ? maior : c;

    printf("O maior número é: %d\n", maior);//100

    return 0;
}