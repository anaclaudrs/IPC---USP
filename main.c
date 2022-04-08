#include <stdio.h>

int main()
{
    int cargo;
    float horas;
    
    scanf("%d", &cargo);
    scanf("%f", &horas);
    
    //verifica se a entrada eh valida
    if (cargo<0 || cargo >2){
        printf("Trabalhador nao identificado!");
    }
    
    // calcula e imprime o salario
    switch (cargo) {
        case 0:
            printf("%.2f \n", 6.50*horas);
            break;
        case 1:
            printf("%.2f \n", 35*horas);
            break;
        case 2: 
            printf("%.2f \n", 80*horas);
            break;
    }

    return 0;
}
