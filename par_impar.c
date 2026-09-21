

#include <stdio.h>

int main()
{
    
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    
        if(num % 2 == 0){
            printf("O numero %d é par",num);
        }else{
            printf("O numero %d é impar",num);
        }
    
        /*num % 2 == 0 ? printf("O numero %d é par",num): printf("O numero %d é impar",num);
*/

    return 0;
}
