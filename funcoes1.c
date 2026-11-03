#include <stdio.h>

void saudacao(){
   printf("Ola, bem-vindo a aula de programacao C!\n");
}

void exibirMensagem(char nome[]){
    printf("Ola, %s! Bem-vindo!\n", nome);
}

int obterNumero(){
    return 42;
}
int soma(int a, int b){
    return a + b;
}
void parImpar(int n){
  if(n%2==0){
    printf("%d é Par\n",n);
  }
  else{
    printf("%d é Ímpar\n",n);  
  }
}
int main(){
   int x=0, s=0;
   //for(int i=0;i<10;i++) 
   saudacao();
   saudacao();
   //return 0;//
   exibirMensagem("Joao");
   exibirMensagem("Maria");
   x = obterNumero();
   printf("x = %d\n",x);
   printf("o valor será %d\n",obterNumero());
   //o valor será 42
   //Criar linhas de código para executar a função soma
   //nos dois formatos
   s = soma(5,7);
   printf("Soma = %d\n",s);
   printf("Soma = %d\n",soma(8,4));
   //Criar uma função para enviar um número
   //inteiro e verificar se é PAR ou Ímpar
   parImpar(12);
   parImpar(2025);

   return 0;
}