#include <stdio.h>

int main() {
    
   
    int dinheiro, notasCem, notasCinquenta, 
    notasVinte, notasDez, notasCinco, notasDois,notasUm;

    scanf("%d", &dinheiro);
    printf("%d\n", dinheiro); 
    notasCem = dinheiro / 100;  
    dinheiro = dinheiro % 100;

    notasCinquenta = dinheiro / 50;  
    dinheiro = dinheiro % 50;

    notasVinte = dinheiro / 20;  
    dinheiro = dinheiro % 20;

    notasDez = dinheiro / 10;  
    dinheiro = dinheiro % 10;

    notasCinco = dinheiro / 5;  
    dinheiro = dinheiro % 5;

    notasDois = dinheiro / 2;  
    dinheiro = dinheiro % 2;

    
    notasUm = dinheiro;  
   

   
    printf("%d nota(s) de R$ 100,00\n", notasCem);
    printf("%d nota(s) de R$ 50,00\n", notasCinquenta);
    printf("%d nota(s) de R$ 20,00\n", notasVinte);
    printf("%d nota(s) de R$ 10,00\n", notasDez);
    printf("%d nota(s) de R$ 5,00\n", notasCinco);
    printf("%d nota(s) de R$ 2,00\n", notasDois);
    printf("%d nota(s) de R$ 1,00\n", notasUm);

    
}