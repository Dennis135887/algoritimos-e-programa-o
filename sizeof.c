#include <stdio.h>
 
int main()
{
    int x = 10;
    float nota = 7.8;
    float notas[5];
    float moeda[] = {1.00, 0.50, 0.25, 0.10, 0.05, 1.50, 0.55};
    int q = 6;
 
    printf("char   : %zu byte\n", sizeof(char));//1
    printf("int    : %zu bytes\n", sizeof(int));//4
    printf("double : %zu bytes\n", sizeof(double));//8
    printf("x      : %zu bytes\n", sizeof(x));//4
    printf("nota   : %zu bytes\n", sizeof(nota));//4
    printf("notas  : %zu bytes\n", sizeof(notas));//20
    printf("moeda  : %zu bytes\n", sizeof(moeda));//28
 
    //criar um looping para imprimir todos
    //os valores contidos em moeda
    //sem saber a quantidade
    q=sizeof(moeda)/sizeof(moeda[0]);//7
    for(int i=0;i<q;i++){
        printf("%.2f ",moeda[i]);
    }
    printf("\n");
    return 0;
}
