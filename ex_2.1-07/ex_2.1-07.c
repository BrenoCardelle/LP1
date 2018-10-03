#include <stdio.h>

int main(void){

    typedef struct dados_times{
        char nomes[30];
        int vitorias;
        int derrotas;
        int empates;
        int pontos;
    }TIMES;

    TIMES time[20];

    int i, mais, menos;
    mais = 0; menos = 0;

    for(i=0; i<=1; i++){
        printf("Entre com o nome do time: ");
        scanf("%s", &time[i].nomes);
        printf("Entre com o numero de vitorias do time: ");
        scanf("%d", &time[i].vitorias);
        printf("Entre com o numero de empates do time: ");
        scanf("%d", &time[i].empates);
        printf("Entre com o numero de derrotas do time : ");
        scanf("%d", &time[i].derrotas);
    }

    for(i=0; i<=1; i++){

        time[i].pontos = ((time[i].vitorias*3)+time[i].empates);

        if (time[i].pontos >= time[mais].pontos){ mais = i; }

        if (time[i].pontos <= time[menos].pontos){ menos = i; }

    }

    printf("O time com mais pontos eh o %s com %d pontos.\n", time[mais].nomes, time[mais].pontos);

    printf("O time com menos pontos eh o %s com %d pontos.\n", time[menos].nomes, time[menos].pontos);

    printf("%d, %d, %d, %d \n", time[1].vitorias, time[1].empates, time[1].derrotas, time[1].pontos);


    return 0;
}

