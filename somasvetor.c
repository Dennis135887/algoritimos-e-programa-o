/*
Implementar a soma da diagonal 1 + 6 + 11 = 18
*/

#include <stdio.h>

int main()
{
    enum { L = 3, C = 4 };
    int matriz[L][C] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int slinha[L] = {0};              // soma de cada linha
    int scoluna[C] = {0};             // soma de cada coluna
    int i, j, somad = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            slinha[i]  += matriz[i][j];
            scoluna[j] += matriz[i][j];
            if(i==j) somad+=matriz[i][j];
        }
    }

    for (i = 0; i < L; i++) {
        printf("slinha[%d] = %d\n", i, slinha[i]);
    }
    for (j = 0; j < C; j++) {
        printf("scoluna[%d] = %d\n", j, scoluna[j]);
    }
   printf("Soma diagonal = %d\n",somad);
    return 0;
}