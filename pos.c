#include <stdio.h>

int main()
{
   enum { L = 5, C = 5 };
    int m[L][C] = {
        {1},              // linha 0: 1, e o resto da linha vira 0
        {2, 3}
                    // linha 1: 2 e 3, e o resto da linha vira 0
    };
    m[L-1][C-1]=9;//último
    int i, j;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}