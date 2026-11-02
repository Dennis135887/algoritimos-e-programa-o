/*
Implementar o código do slide 23, matriz em movimento
preenchendo uma matriz de 3 linhas por 4 colunas
com números de 1 a 12

Mostrar os números impressos de 1 a 12
Motrar o resultado da soma da segunda linha
Motrar o resultado da soma da segunda coluna
*/
#include <stdio.h>

int main(){
  int k = 1, somalinha=0, somacoluna=0;
  enum { L = 4, C = 3 };
  int matriz[L][C]={0};
  for(int i=0; i<L;i++){
    for(int j=0;j<C;j++){
       matriz[i][j]=k++;//
       printf("%02d ",matriz[i][j]);//
       if(i==1)somalinha+=matriz[1][j];//
       if(j==1)somacoluna+=matriz[i][1];//
    }
    printf("\n");
  }
  printf("Soma da segunda linha  = %d\n",somalinha);
  printf("Soma da segunda coluna = %d\n",somacoluna);

  return 0;
}
