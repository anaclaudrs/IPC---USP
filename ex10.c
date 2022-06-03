#include <stdio.h>
#include <stdlib.h>

//calcula a media.
float media(int alunos, float* notas){
    int i;
    float soma = 0;

    for (i = 0; i< alunos ; i++){
        soma = soma + notas[i];
    }

    return (soma/alunos);
}

//calculo da mediana
float mediana(int alunos, float* notas){
    float n1, n2, median, a;
    int i,j;

    for (i = 0; i < alunos; ++i){
      for (j = i + 1; j < alunos; ++j){
         if (notas[i] > notas[j]){
            a = notas[i];
            notas[i] = notas[j];
            notas[j] = a;
         }
      }
   }

    if(alunos%2 == 0) {
        n1 = notas[(alunos/2) - 1];
        n2 = notas[alunos/2];
        median = (n1+n2)/2;
    }
    if(alunos%2 != 0) {
        median = notas[(alunos-1)/2];
    }

    return (median);
}

int main(){
    float *notas1, *notas2;
    int alunos1,alunos2 ,i;

    scanf("%d", &alunos1);

    //aloca o tamanho de "notas" 
    notas1 = (float *)malloc(alunos1 * sizeof(float));

    //armazena as notas.
    for(i = 0; i< alunos1; i++){
        scanf("%f", &notas1[i]);
        }

    //segunda turma
    scanf("%d", &alunos2);

    //aloca o tamanho de "notas" 
    notas2 = (float *)malloc(alunos2 * sizeof(float));

    //armazena as notas.
    for(i = 0; i< alunos2; i++){
        scanf("%f", &notas2[i]);
        }

    //imprime o resultado:
    printf("Turma 1:");
    printf("\nmedia: %.2f\nmediana: %.2f\n", media(alunos1, notas1), mediana(alunos1, notas1));
    printf("\nTurma 2:");
    printf("\nmedia: %.2f\nmediana: %.2f\n", media(alunos2, notas2), mediana(alunos2, notas2));
    printf("\nMedia das medias: %.2f\n", (media(alunos1, notas1)+media(alunos2, notas2))/2);

    return 0;
}