encadeado.c

#include <stdio.h>
 
int main (){
    int i,j;
 
    for(i=1;i<3;i++) {//ext //min
        for(j=4;j>=2;j--) {//int //seg
            printf("\n%d %d",i,j);
        }
    }
    return 0;
}
/*
i j
0 0
0 1
0 2
1 0
1 1
1 2
---------
1 4
1 3
1 2
2 4
2 3
2 2


*/
