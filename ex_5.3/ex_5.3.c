#include <stdio.h>

void compra(int* conta,int* conta2,int quant){

    int valor[quant];
    for(int i = 0; i < quant; i++){

        printf("Digite o valor da compra: ");
        scanf("%d,",&valor[i]);

    }
    for(int j = 0; j < quant; j++){

        if(*conta > *conta2){*conta = *conta - valor[j];}
        else{*conta2 = *conta2 - valor[j];}
        printf("\nValor debitado: R$ %d,00 \nValor da primeira conta: R$ %d,00 \nValor da segunda conta: R$ %d,00\n",valor[j],*conta,*conta2);
    }



}

int main (){

    int minha_conta = 0;
    int minha_conta2 = 0;
    int quant = 0;
    printf("Digite o valor da primeira conta: ");
    scanf("%d",&minha_conta);
    printf("Digite o valor da segunda conta: ");
    scanf("%d,",&minha_conta2);
    printf("Digite a quantidade de compras: ");
    scanf("%d,",&quant);

    compra(&minha_conta,&minha_conta2,quant);

}
