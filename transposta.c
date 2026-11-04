#include <stdio.h>

int main()
{
    int original[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transposta[3][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = original[i][j];   // troca linha por coluna
        }
    }

    printf("Transposta (3 x 2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}