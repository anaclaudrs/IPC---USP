#include <stdio.h>
#include <math.h>

//define o tipo "fracao", com denomnador e numerador.
typedef struct _Frac{
    int num;
    int den;
}Frac;

//a funcao mdc usa o algoritmo de euclides para encontrar o mdc entre a e b.
int mdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    Frac frac1;
    Frac frac2;
    Frac resultado;
    
    scanf("%d%d", &frac1.num, &frac1.den);
    scanf("%d%d", &frac2.num, &frac2.den);
    	
    	
   //calcula o denominador e numerador do resultado.
    resultado.den = (frac1.den*frac2.den)/mdc(frac1.den, frac2.den);

    resultado.num = (resultado.den/frac1.den)*frac1.num + (resultado.den/frac2.den)*frac2.num;

    if (resultado.den == 1){
        printf("%d", resultado.num);
    }else{
        printf("%d/%d", resultado.num, resultado.den);
    }

    return 0;
}
