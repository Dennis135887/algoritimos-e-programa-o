/*
gcc for.c -o for && ./for


for(valor_inicial;condição;contador)


1) Mostrar o valores de 0 - 10, usando for
2) Mostrar o valor que torna a condição falsa
3) Alterar para mostrar os valores pares entre 0 - 10
    a) usando operador de atribuição
    b) usando if
4) break e continue    
*/
#include <stdio.h>
int main(){
    int falso=0;
    for(int i=0;i<=10;i++){
        // falso=i+1;
        if((i>=3 && i<=7)){
            break;
           // continue;
        }
        printf("%d ",i);// 3 4 5 6 7(i>=3 && i<=7) (i<3 || i>7)
    }
    printf("\n");
    // printf("\n Falso: %d\n",falso);
    return 0;
}


