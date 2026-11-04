/*
atv0610.c
gcc atv0610.c -o atv0610 && ./atv0610

Criar um código para mostrar os números de 01 a 25, conforme mostrado a seguir, 
usando looping encadeado

01 02 03 04 05 
06 07 08 09 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

Altere o código para mostrar apenas a 1a linha, na horizontal;
01 02 03 04 05
Altere o código para mostrar apenas a 2a coluna, na vertical;
02 07 12 17 22
Altere o código para mostrar a segunda linha e a segunda coluna;
Altere o código para mostrar os valores: 01 07 13 19 25
Altere o código para mostrar os valores: 05 09 13 17 21



*/
#include <stdio.h>
int main(){
    int saida=1, q=5;
    for(int i=0;i<q;i++){// i=i+1 // i++
        for(int j=0;j<q;j++){
            //if(i==q-1)
            //if(i>=0)
           // if(!(i==q/2 || j==q/2))
            // if(i==0 || j==q-1)
            //if(!(i==0 || j==0 ||i==q-1 || j==q-1))
            //if(j==q-1-i || i==j)
            //if(i==j)
            if(i==0 && j==0  )
                printf("%02d ",saida);
            else
                printf("   ");


            saida++;
        }
        printf("\n");
    }


    printf("\n");
    return 0;




}
