#include <stdio.h>

int main()
{
    enum { L = 4, C = 4 };
    int somal = 0, somac = 0;
    int aux;
    int matriz[L][C] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {1, 9, 2, 6},
        {4, 8, 5, 3}
    };

    printf("matriz[2][1] = %d\n", matriz[2][1]);//9

    //matriz[2][1] += 12;//21


    printf("matriz[2][1] = %d\n", matriz[2][1]);//21
    //como trocar de posição  {4, 8, 5, 3}
    //trocar o 5 e o 8
    // {4, 5, 8, 3}
    printf("%d %d\n",matriz[3][1], matriz[3][2]);
    aux=matriz[3][1];
    matriz[3][1]=matriz[3][2];
    matriz[3][2]=aux;
    printf("%d %d\n",matriz[3][1], matriz[3][2]);
    //gerar a saída usando looping linha:
    //1 9 2 6
    for(int i=0;i<L;i++){
        printf("%d ",matriz[2][i]);
    }
    //gerar a saída usando looping coluna:
    // 7
    // 8
    // 6
    // 3
    printf("\n");
    for(int i=0;i<L;i++){
        printf("%d\n",matriz[i][3]);
    }
    //imprimir todos os valores da matriz
    printf("\n Todos os valores \n");
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf("%d ",matriz[i][j]);


        }
        printf("\n");
    }    
    //imprimir a soma dos valores da primeira linha = 16
    //imprimir a soma dos valores da primeira coluna = 8
    printf("\nSoma linha  = %d",somal);//16
    printf("\nSoma coluna = %d",somac);//8
    return 0;
}