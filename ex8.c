#include <stdio.h>

//define um registro "produto"
typedef struct _Produto{
        int codigo;
        char nome[20], lixo;
        int quantidade;
        float preco;
    }Produto;
    

int main() {
    Produto prod[3];
    int quant_procurada, cod_procurado;
    int i=0;
    
    //Preence "prod", do tipo Produto
    for(i = 0; i < 3; i++){
        scanf("%d", &(prod[i].codigo));
        scanf("%s", prod[i].nome);
        scanf("%d", &(prod[i].quantidade));
        scanf("%f", &(prod[i].preco));
    }
    
    //pergunta o usuario o que ele quer procurar
    scanf("%d", &cod_procurado);
    scanf("%d", &quant_procurada);

    if(cod_procurado == prod[0].codigo){
        if(quant_procurada <= prod[0].quantidade){
            printf("Pedido: %d %s\n", quant_procurada, prod[i].nome);
            printf("Total: %2.f reais\n", quant_procurada*prod[i].preco); // imprime a compra.
        }else{
            printf("Infelizmente nao temos a quantidade desejada em estoque, temos apenas 2 disponiveis.");
        }
    }else if(cod_procurado == prod[1].codigo){
        if(quant_procurada <= prod[1].quantidade){
            printf("Pedido: %d %s\n", quant_procurada, prod[i].nome);
            printf("Total: %2.f reais\n", quant_procurada*prod[i].preco);  // imprime a compra.
        }else{
            printf("Infelizmente nao temos a quantidade desejada em estoque, temos apenas 2 disponiveis.");
        }
    }else if(cod_procurado == prod[2].codigo){
        if(quant_procurada <= prod[2].quantidade){
            printf("Pedido: %d %s\n", quant_procurada, prod[i].nome);
            printf("Total: %2.f reais\n", quant_procurada*prod[i].preco);  // imprime a compra.
        }else{//nao tem quantidade suficiente.
            printf("Infelizmente nao temos a quantidade desejada em estoque, temos apenas 2 disponiveis.");
        }
    }else{
        printf("Esse produto nao existe.");
    }
    
    return 0;
}