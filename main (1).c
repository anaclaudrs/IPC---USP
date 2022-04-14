#include <stdio.h>

int main()
{
    int cargo, horas;
    
    scanf("%d", &cargo);
    scanf("%d", &horas);
    
    switch (cargo){
        case 0:
            printf("%.2f", (horas*6.5)*20);
            break;
        case 1:
            printf("%.2d", (horas*35)*20);
            break;
        case 2:
            printf("%.2d", (horas*80)*20);
            break;
        default:
            printf("Trabalhador nao identificado!");
            break;
    }
    
    return 0;
}
