#include <stdio.h>

int g_total = 0; // variável global

/*
Criar uma função nomeada looping

A função deverá receber um número e gerar o looping
de 0 até esse número, mostrando os valores
na horizontal.
Após o looping deverá mostrar o número que
tornou a condição do looping como falsa
Exemplo:
looping(4)
0 1 2 3 4
O número 5 tornou a condição falsa

nova alteração!
looping1(10,2)
0 2 4 6 8 10

nova alteração!
looping2(10,3)
Saída: 0 3 6 9
1) valor inicial: 0
2) condição: i<=10
3) contador: i+=3
4) Executou 4 vezes
5) O valor 12 tornou a condição como falsa

looping2(10,-2)//
looping2(-2,1)//
*/

void acumular(int valor){
    int temp = valor * 2; // variável local, só existe dentro da função
    g_total += temp;
}
void looping (int a){ 
  int i;
  printf("\n");
  for(i=0;i<=a;i++) printf("%d ",i);
  printf("\nO número %d tornou a condição falsa",i);  
}
void looping1 (int a, int passo){ 
  int i;
  printf("\n");
  for(i=0;i<=a;i+=passo) printf("%d ",i);
}

int main(){
    int x = 5; //variável local

    acumular(x);//10
    acumular(3);//16
    printf("Total: %d\n", g_total); // Será que funciona?
    looping(7);
    looping1(10,5);
   //printf("%d, temp); // Será que funciona
    return 0;
}
Pro
