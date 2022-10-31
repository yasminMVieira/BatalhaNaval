#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char matriz[5][5];
    char pos[3];
    int i = 0, j = 0, a = 0, contSub = 0, contTorp = 0;
    int fim = 0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = rand()%2; //se sortear 0 é agua, 1 é submarino
            if (matriz[i][j] == 1){
                contSub++;
            }
        }
    }
    contTorp = contSub + 2; //+2 = erros possiveis

    while(fim == 0){
        if(contTorp == 0){
            printf("\nVoce perdeu pois seus torpedos acabaram!\n");
            fim = 1;
            break;
        }
        if(contSub == 0){
            printf("\nVoce ganhou!\n");
            fim = 1;
            break;
        }

        printf("   ");
        for(a=0; a<5; a++){
            printf("  %d ", (a+1));
        }
        printf("\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");
        printf(" A ");

        for(j=0; j<5; j++){
            printf("| ");
            if(matriz[0][j]== 'w'){
                printf("W ");
            }else if(matriz[0][j]== '*') {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("|\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");
        printf(" B ");

        for(j=0; j<5; j++){
            printf("| ");
            if(matriz[1][j]== 'w'){
                printf("W ");
            }else if(matriz[1][j]== '*') {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("|\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");
        printf(" C ");

        for(j=0; j<5; j++){
            printf("| ");
            if(matriz[2][j]== 'w'){
                printf("W ");
            }else if(matriz[2][j]== '*') {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("|\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");
        printf(" D ");

        for(j=0; j<5; j++){
            printf("| ");
            if(matriz[3][j]== 'w'){
                printf("W ");
            }else if(matriz[3][j]== '*') {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("|\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");
        printf(" E ");

        for(j=0; j<5; j++){
            printf("| ");
            if(matriz[4][j]== 'w'){
                printf("W ");
            }else if(matriz[4][j]== '*') {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("|\n");

        printf("   ");
        for(a=0; a<5; a++){
            printf("+---");
        }
        printf("+\n");

        printf("\nO mapa possui %d submarinos\n", contSub);
        printf("Voce possui %d torpedos\n", contTorp);

        printf("\nQual posicao deseja abater?\n");
        scanf("%s", pos);
        contTorp--;

        //IDENTIFICANDO QUAL LINHA DA MATRIZ
        if(pos[0] == 'A'){
            i = 0;
        }else if(pos[0] == 'B'){
            i = 1;
        }else if(pos[0] == 'C'){
            i = 2;
        }else if(pos[0] == 'D'){
            i = 3;
        }else if(pos[0] == 'E'){
            i = 4;
        }else{
            printf("\nPosicao invalida!\n\n");
        }

        j = (pos[1] - '0') - 1;

        if(matriz[i][j] == 1){
            matriz[i][j] = '*';
            printf("\nVoce acertou um submarino!\n\n");
            contSub--;
        }else{
            matriz[i][j] = 'w';
        }


    }

    printf("Fim de jogo!");

    return 0;
}


