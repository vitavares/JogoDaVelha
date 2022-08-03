#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, jogador, vitoria, repetir;
    char tabuleiro[3][3];
    printf("\t-----------------------------------\n");
    printf("\t|                                 |\n");
    printf("\t|         JOGO  DA  VELHA         |\n");
    printf("\t-----------------------------------\n\n");
    printf("\n     Jogador 1 = x \n     Jogador 2 = o\n\n");

do{
    jogador=1;
    vitoria=0;
    for(x=0; x<3; x++){
        for ( y = 0; y < 3; y++){
            tabuleiro[x][y] = ' ';
        }
    }while (vitoria==0)

    printf("\n\n\t\t  0     1     2  \n");

    for ( x = 0; x < 3; x++){
        for ( y = 0; y < 3; y++){
            if (y==0)
            printf("\t\t");
            printf("  %c  ", tabuleiro[x][y]);
            if (y < 2)
            printf("|");
            if (y==2)
            printf("  %d", x);
        }
        if (x < 2){
            printf("\n\t\t------------------\n");
        }
    } 
    do{
        printf("\n\n\nLinha que você deseja jogar: ");
        scanf("%d", &x);
        printf("\nColuna que você deseja jogar:");
        scanf("%d", &y);
    } while ( x<0 || x>2 || y<0 || y>2 || tabuleiro[x][y] != ' ');

    if (jogador==1){
        tabuleiro[x][y]='x';
        jogador++;
    }else{
        tabuleiro[x][y]='o';
        jogador=1;
    }
    if ((tabuleiro[0][0]=='o' && tabuleiro[0][1]=='o' && tabuleiro[0][2]=='o') ||
        (tabuleiro[1][0]=='o' && tabuleiro[1][1]=='o' && tabuleiro[1][2]=='o') ||
        (tabuleiro[2][0]=='o' && tabuleiro[2][1]=='o' && tabuleiro[2][2]=='o')){
        printf("Jogador 1 venceu!! \nParabéns!!");
        vitoria++;
    }
    if ((tabuleiro[0][0]=='x' && tabuleiro[0][1]=='x' && tabuleiro[0][2]=='x') ||
        (tabuleiro[1][0]=='x' && tabuleiro[1][1]=='x' && tabuleiro[1][2]=='x') ||
        (tabuleiro[2][0]=='x' && tabuleiro[2][1]=='x' && tabuleiro[2][2]=='x')){
        printf("Jogador 2 venceu!! \nParabéns\n\n!!");
        vitoria++;
    }
    if ((tabuleiro[0][0]=='o' && tabuleiro[1][0]=='o' && tabuleiro[2][0]=='o') ||
        (tabuleiro[0][1]=='o' && tabuleiro[1][1]=='o' && tabuleiro[2][1]=='o') ||
        (tabuleiro[0][2]=='o' && tabuleiro[1][2]=='o' && tabuleiro[2][2]=='o')){
        printf("Jogador 1 venceu!! \nParabéns\n\n!!");
        vitoria++;
    }
    if ((tabuleiro[0][0]=='x' && tabuleiro[1][0]=='x' && tabuleiro[2][0]=='x') ||
        (tabuleiro[0][1]=='x' && tabuleiro[1][1]=='x' && tabuleiro[2][1]=='x') ||
        (tabuleiro[0][2]=='x' && tabuleiro[1][2]=='x' && tabuleiro[2][2]=='x')){
        printf("Jogador 2 venceu!! \nParabéns\n\n!!");
        vitoria++;
    }
    if ((tabuleiro[0][0]=='o' && tabuleiro[1][1]=='o' && tabuleiro[2][2]=='o') ||
        (tabuleiro[0][2]=='o' && tabuleiro[1][1]=='o' && tabuleiro[2][0]=='o')){
        printf("Jogador 1 venceu!! \nParabéns\n\n!!");
        vitoria++;
    }
    if ((tabuleiro[0][0]=='x' && tabuleiro[1][1]=='x' && tabuleiro[2][2]=='x') ||
        (tabuleiro[0][2]=='x' && tabuleiro[1][1]=='x' && tabuleiro[2][0]=='x')){
        printf("Jogador 2 venceu!! \nParabéns\n\n!!");
        vitoria++;
    }

    for ( x = 0; x < 3; x++){
        for ( y = 0; y < 3; y++){
            printf("  %c  ", tabuleiro[x][y]);
            if (y < 2){
            printf("|");
            }
        }
        if (x < 2){
            printf("\n------------------\n");
        }
    } 
    if(vitoria == 0){
        printf("\nDeu velha!\n");
    }
    printf("\nDigite 1 para jogar novamente: \n");
    scanf("%d", &repetir);
} while(repetir == 1);
return 0;
}
