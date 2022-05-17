    #include <stdio.h>

    int main() {
        
        char palavra[8], letra, tentativa[8], lixo;
        int i;
        int tent = 0;
        int corretas = 0;
        
        //armazena a palavra.
        for(i = 0; i <  8; i++){
            scanf("%c ", &palavra[i]);
            tentativa[i] = '_';
        }


        for(tent = 0; tent < 10; tent ++){
            scanf("%c%c",&letra, &lixo); 
            //a variavel "lixo" corrige um erro onde o programa pegava o caracter duas vezes.
            
            //percorre o vetor e caso a letra esteja na palavra, ela é substituida no vetor tentativa.
            for(i = 0; i < 8; i++){
                if(letra == palavra[i]){
                    tentativa[i] = palavra[i];
                    corretas = corretas + 1;//conta o numero de letras acertadas.
                }
            }
            
            //imprime o vetor com as tentativas
            for(i = 0; i < 8; i++){
                printf("%c", tentativa[i]);
            } printf("\n");
            
            
        }

        //confere se o jogador acertou todas as 8 letras
        if(corretas >= 8){
            printf("Acertou!");
        }else{ //se não tiver acertado as 8 letras, imprime a mensagem de erro
            printf("Errou.");
        }
        
        return 0;
    }