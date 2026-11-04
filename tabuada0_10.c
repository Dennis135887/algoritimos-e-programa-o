tabuada0_10

#include <stdio.h>


int main(){
    int tabu;
    //printf("Digite um numero inteiro para tabuada: ");
    //scanf("%d",&tabu);
    for(tabu=1;tabu<11;tabu++){
        printf("Tabuada: %d \n",tabu);
        for(int i=0;i<11;i++){
            printf("%d x %d = %d \n", tabu,i,tabu*i);
        }
        printf("----------\n");
    }
   


    return 0;
}
/*
Mostrar todas as tabuadas de 1 até 10
Tabuada: 1
1 x 0 = 0
1 x 1 = 1
----------
Tabuada: 2
2 x 0 = 0
2 x 1 = 2
----------
.....
Tabuada: 10
10 x 0 = 0
10 x 1 = 10
*/

