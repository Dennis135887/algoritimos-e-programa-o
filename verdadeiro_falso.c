#include <stdio.h>
int main() {
  int a = 2, b = 3, c = 4 , res;
  res = a<=b;
  printf("Resultado : %d \n",res);//
  res = !(a<=b);
  printf("Resultado : %d \n",res);//
  res = (a<=b) && !(c>b);//(V)&&(F)//F
  printf("Resultado : %d \n",res);//
  res = !(!(a > c) || !( c < b));
  printf("Resultado : %d \n",res);//
  res = (a > c) || (b<c) && (c<1);
  printf("Resultado : %d \n",res);//
  return 0;
}