#include <stdio.h>

int main() {
    int Linha[10];
    char Coluna[10];
    int Tabuleiro[10][10];
    int navioHorizontal[3];
    int navioVertical[3];

    //Estrutura de repeticao aninhada para inicializar a Matriz com 0

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            Tabuleiro[i][j] = 0;
        }
    }

    //Estrutura de repeticao para receber as posicoes dos navios
    for (int i = 0;i < 3; i++){
        navioHorizontal[i] = 3;
        navioVertical[i] = 3;
    }

    //Estrutura de repeticao para receber as linhas representadas de 1 a 10
    for (int i = 0; i < 10; i++){
        Linha[i] = i + 1;
    }

    //Estrutura de repeticao para receber as colunas representadas de A a J
    for (int i = 0; i < 10; i++){
        Coluna[i] = 'A' + i;
    }

    printf("\n");

    printf(" ### Jogo Batalha Naval ###\n");
    printf(" ");

    //Impressao das colunas representadas de A a J(1 a 10)
    for (int i = 0; i < 10; i++){
        printf("%2c", Coluna[i]);
        
        
    }
    printf("\n");
    
    //Posiciona o navio horizontal na linha 2, colunas 3, 4 e 5
    //Posiona o navio vertical na coluna 7, linhas 5, 6 e 7
    //Exibicao das posicoes dos navios no Tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%2d", Linha[i]);
        for (int j = 0; j < 10; j++){
            Tabuleiro[2][3] = navioHorizontal[0];
            Tabuleiro[2][4] = navioHorizontal[1];
            Tabuleiro[2][5] = navioHorizontal[2];

            Tabuleiro[5][7] = navioVertical[0];
            Tabuleiro[6][7] = navioVertical[1];
            Tabuleiro[7][7] = navioVertical[2];

            printf("%2d", Tabuleiro[i][j]);
        }
        printf("\n");
      }
        
    return 0;
}
