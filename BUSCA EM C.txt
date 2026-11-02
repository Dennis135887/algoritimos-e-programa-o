/*
Criar uma forma de mostrar a primeira 
ocorrência do número 50
Encontrado na linha 1, coluna 1

Criar outra forma para mostrar a última 
ocorrência do número 50
Encontrado na linha 2, coluna 1
*/

#include <stdio.h>

int main()
{
    enum { L = 3, C = 3 };
    int matriz[L][C] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 50, 90}
    };
    int i, j, valor, achou = 0;

    printf("Valor procurado: ");//70 80 50
    scanf("%d", &valor);

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (matriz[i][j] == valor) {
                printf("Encontrado na linha %d, coluna %d\n", i, j);
                achou = 1;
            }
        }
       if(achou==1) break; //mostra apenas a primeira ocorrência  
    }

    if (achou == 0) {
        printf("Valor nao encontrado\n");
    }

    return 0;
}