//Trabalho 4 IPC - Ana Claudia

#include <stdio.h>

int main() {
    
    int larg, comp, a;
    
    scanf("%d", &larg);
    scanf("%d", &comp);
    scanf("%d", &a);
    
    if (larg*comp == a){
        printf("Retangular.");
    }else{
        if ((larg*comp)/2 == a){
            printf("Triangular.");
        } else{
            printf("Nao eh um terreno.");
        }
    }
    
    return 0;
}
