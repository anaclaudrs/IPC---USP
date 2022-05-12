#include <stdio.h>

int main(){

    float prova, mediafinal, mediatrab, mediaex;
    float trabalho[2];
    float exercicios[10];
    float somaex = 0;
    float menor = 0;
    float segmenor = 0;


    //le a nota da prova
    scanf("%f", &prova);

    //le as notas dos trabalhos
    scanf("%f", &trabalho[1]);
    scanf("%f", &trabalho[2]);
    
    //calculo da media dos trabalhos
    mediatrab = (trabalho[1]+trabalho[2])/2;
    
    //le as notas de exercicios
    for (int i = 0; i<=9; i++){
        scanf("%f", &exercicios[i]);
        somaex = somaex + exercicios[i];
    }
    
    //procura a menor nota do trabalho e a segunda menor nota (segmenor)
    if (exercicios[0] < exercicios[1]) {
        //caso a menor e segunda menor sejam as primeiras, já deixa definido
        menor = exercicios[0];
        segmenor = exercicios[1];
    }else {
        //caso contrario, define as duas primeiras como as menores.
      menor = exercicios[1];
      segmenor = exercicios[0];
    }
    //procura por notas que sejam menor que essas. caso haja, essa passa a ser a menor e segunda maior.
    for (int i = 2; i <= 9; i++) {
        if (exercicios[i] < menor) {
            segmenor = menor;
            menor = exercicios[i];
        }
        else if (exercicios[i] < segmenor) {
            segmenor = exercicios[i];
        }
    }

    //calculo da soma e da media dos exercicios
    somaex = somaex - menor - segmenor;
    mediaex = somaex/8;
    
    //calcula a media final das notas
    mediafinal = (2*mediatrab + (somaex/8) + prova)/4;
    
    //caso a media de alguma das partes seja <3, entao a media final eh essa mesma nota:
    if(mediaex < 3 || mediatrab < 3 || prova <3){
        if (mediaex < prova && mediaex < mediatrab){
            mediafinal = mediaex;
        }
        if(mediatrab < mediaex && mediatrab < mediaex){
            mediafinal = mediatrab;
        }
        if(prova < mediatrab && prova < mediaex){
            mediafinal = prova;
        }
    }
    
    //imprime a media final.
    printf("%.2f", mediafinal);
    
    return 0;
}