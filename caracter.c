#include <stdio.h>
int main(){
    //int x=3;
    char letra;
    //letra='c';
    printf("Digite um carcatere: ");
    scanf("%c",&letra);
    enum {Q = 9};
    int matriz[Q][Q]={0};
    for(int i=0;i<Q;i++){
        for(int j=0;j<Q;j++){
           printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("%.*s\n", Q, "==========================");
    for(int i=0;i<Q;i++){
        for(int j=0;j<Q;j++){
            switch(letra){
                case 'c':
                case 'C':
                    if(i==0 || j==0 || i==Q-1) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                case 'm':    
                case 'M':

                    // j == 0 (haste esquerda)
                    // j == Q-1 (haste direita)
                    // i == j (diagonal principal para a metade superior)
                    // j == Q-1-i (diagonal secundária para a metade superior)
                    // Limitamos com i <= Q/2 para formar o "V" invertido no meio
                   if (j == 0 || j == Q - 1 || (i <= Q / 2 && (i == j || j == Q - 1 - i))) 
                        printf("%d", matriz[i][j]);
                    else 
                        printf(" "); 
                    break;
                case 'u':    
                case 'U':
                    if(j==0 || j==Q-1 ||i==Q-1) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                    
                case 'f':
                case 'F':
                    if(i == 0 ||j == 0 || i == 3 ) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                
                case 'a':
                case 'A':
                    if(i == 0 ||j == 0 || i == 3 || j == Q-1 ) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;  
                
                case 'e':
                case 'E':
                    if(i == 0 ||j == 0 || i == 3 || i == Q-1 ) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                    
                case 'h':
                case 'H':
                    if(j == 0 ||j == Q-1 || i == 3) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                    
                    
                case 'n':
                case 'N':
                    if(j == 0 ||i == j || j == Q-1) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                    
                case 'z':
                case 'Z':
                    if(i == 0  || j == Q-1 - i || i == Q-1) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;
                    
                case 'x':
                case 'X':
                    if(i == j  || j == Q-1 - i) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;    
                    
                
                case 'y':
                case 'Y':
                    if(i == 0  || j == Q-1 - i || i == Q-1 || i == j) printf("%d",matriz[i][j]);
                    else printf(" "); 
                    break;      
                default:
                    if(i>=0) printf("%d",matriz[i][j]);

            }
            //F
            //A
            //E
            //H
            //N
            //Z
            //X
            //ampulheta
                
        }
        printf("\n");
    }
    return 0;
}