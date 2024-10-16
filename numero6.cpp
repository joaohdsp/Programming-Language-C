#include <stdio.h>
#include <string.h>
#include <math.h>
void input(int matriz[7][7]){
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("Me informe o número de linha %i coluna %i \n", i ,j);
            scanf(" %i", &matriz[i][j]);
        }
    }
}
void somalinha4(int matriz[7][7], int *coleta){
    *coleta = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i==4)
            {
                *coleta+=matriz[i][j];
            }
            
        }
    }
}
void somacoluna2(int matriz[7][7], int *coleta){
    *coleta = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j==2)
            {
                *coleta+=matriz[i][j];
            }
        }
    }
}
void somadiagonalpr(int matriz[7][7], int *coleta){
    *coleta = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i==j)
            {
                *coleta+=matriz[i][j];
            }
        }
    }
}
void somadiagonalse(int matriz[7][7], int *coleta){
    *coleta = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i+j)==7)
            {
                *coleta+=matriz[i][6 - j];
            }
        }
    }
}
void somamatriz(int matriz[7][7], int *coleta){
    *coleta = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            *coleta+=matriz[i][j];
        }
    }
}
int main(){
    int matriz[7][7], op, run = 1, coleta;
    input(matriz);
    printf("\n");
    do
    {
        printf("Opção 0: Sair \n");
        printf("Opção 1: Soma da linha 4 \n");
        printf("Opção 2: Soma da coluna 2 \n");
        printf("Opção 3: Soma da diagonal principal \n");
        printf("Opção 4: Soma da diagonal secundária \n");
        printf("Opção 5: Soma de todos os elementos da matriz \n");
        scanf(" %i", &op);
        switch (op)
        {
        case 0:
            printf("Saiu\n");
            run = 0;
            break;
        case 1:
            somalinha4(matriz, &coleta);
            printf("\n");
            printf("Soma: %i\n", coleta);
            break;
        case 2:
            somacoluna2(matriz, &coleta);
            printf("\n");
            printf("Soma: %i\n", coleta);
            break;
        case 3:
            somadiagonalpr(matriz, &coleta);
            printf("\n");
            printf("Soma: %i\n", coleta);
            break;
        case 4:
            somadiagonalse(matriz, &coleta);
            printf("\n");
            printf("Soma: %i\n", coleta);
            break;
        case 5:
            somamatriz(matriz, &coleta);
            printf("\n");
            printf("Soma: %i\n", coleta);
            break;
        default:
            printf("Insira uma opção válida \n");
            scanf(" %i", &op);
            break;
        }
    } while (run);
    
    
    return 0;
}