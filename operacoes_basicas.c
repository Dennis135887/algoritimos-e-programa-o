#include <stdio.h>
int main() {
  int a,b,c,d;
  a=10;
  b=2;
  a+=b;//12
  b-=a;//-10
  printf("a = %d\n",a);//12
  printf("b = %d\n",b);//-10
  c = 7
  d = 3;
  c %= 2;//1
  d += a;//15
  printf("c = %d\n",c);//1
  printf("d = %d\n",d);//15
  return 0;
}