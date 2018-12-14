#include <stdio.h>

void compra(int* conta,int* conta2){

    int valor[5] = {100, 50, 80, 30, 20};

    for(int j = 0; j < 5; j++){

        if(*conta > *conta2){*conta = *conta - valor[j];}
        else{*conta2 = *conta2 - valor[j];}
        printf("\nValor debitado: R$ %d,00 \nValor da primeira conta: R$ %d,00 \nValor da segunda conta: R$ %d,00\n",valor[j],*conta,*conta2);
    }



}

int main (){

    int minha_conta = 0;
    int minha_conta2 = 0;
    int quant = 5;
    printf("Digite o valor da primeira conta: ");
    scanf("%d",&minha_conta);
    printf("Digite o valor da segunda conta: ");
    scanf("%d,",&minha_conta2);

    compra(&minha_conta,&minha_conta2);

}
