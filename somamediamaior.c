#include <stdio.h>

int main()
{
    enum { L = 3, C = 3 };
    int matriz[L][C] = {
        {2, 4, 6},
        {8, 10, 12},
        {1, 3, 5}
    };
    int i, j, soma = 0, maior = matriz[0][0];//

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            soma = soma + matriz[i][j];//
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];//
            }
        }
    }

    printf("Soma  : %d\n", soma);
    printf("Media : %.2f\n", (float)soma / (L * C));//
    printf("Maior : %d\n", maior);

    return 0;
}