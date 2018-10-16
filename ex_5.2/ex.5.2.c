#include <stdio.h>

void compra(int* conta,int valor){

    *conta = *conta - valor;
}


int main (){

    int minha_conta = 0;
    int minha_conta2 = 0;
    int valor = 0;
    printf("Digite o valor da primeira conta: ");
    scanf("%d",&minha_conta);
    printf("Digite o valor da segunda conta: ");
    scanf("%d,",&minha_conta2);
    printf("Digite o valor da compra: ");
    scanf("%d,",&valor);


    if(minha_conta > minha_conta2){
            compra(&minha_conta,valor);}
    else{
        compra(&minha_conta2,valor);}

    printf("\n Valor da primeira conta: %d\n Valor da segunda conta: %d \n",minha_conta,minha_conta2);

}
