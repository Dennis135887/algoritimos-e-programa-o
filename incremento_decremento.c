#include <stdio.h>

int main() {
    int a=10;
    /*
    a++;//11
    a++;//12
    ++a;//13
    ++a;//14
    */
    //a++ //a=a+1 //a+=1
    a+=4;
    printf(" a = %d\n",a);//14
    a--;//13
    a--;//12
    --a;//11
    printf(" a = %d\n",a);//11
    return 0;
}