#include <stdio.h>

float termo(int n){

    //a função recebe um inteiro n, que eh o indice da sequencia, e retorna o termo da sequencia que tem esse indice.
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 7;
    }else if(n == 2){
        return 3;
    }else{
        return termo(n-1)+termo(n-2)*3-0.5*termo(n-3);
    }
}

int main(){
    int termo_busca;

    scanf("%d", &termo_busca);

    //imprime a sequencia inteira
    printf("(");
    for(int i = 0; i < termo_busca; i++){
        printf("%.2f", termo(i));
        printf(", ");
    }
    printf("%.2f)", termo(termo_busca));

    return 0;
}