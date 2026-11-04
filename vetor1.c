#include <stdio.h>
 
int main()
{
    float moeda[] = {1.00, 0.50, 0.25, 0.10, 0.05, 1.50};
    int x[3];
    x[0]=10;
    x[1]=20;
    x[2]=50;
    printf("x[0]=%d, x[1]=%d, x[2]=%d",x[0], x[1], x[2]);
    printf("\n");


    //imprir os valores das moedas
    //sem looping
    //depois com looping
    printf("%.2f %.2f %.2f %.2f %.2f %.2f \n",moeda[0], moeda[1],moeda[2], moeda[3], moeda[4], moeda[5]);
    for(int i=0;i<6;i++){
        moeda[i]+=0.25;//
        printf("%.2f ",moeda[i]);//moda[i]+0.25
    }
    //usndo looping gere a saída a partir de moeda:
    //1.25 0.75 0.50 0.35 0.30 1.75
    printf("\n");
    return 0;
}
