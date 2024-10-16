#include <stdio.h>
#include <string.h>
#include <math.h>
void matriz(int mat[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Me informe o valor da linha %i coluna %i \n", i, j);
            scanf(" %i", &mat[i][j]);
        }
    }
}
void mattrans(int mat[3][3], int trans[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
}
int main(){
    int mat[3][3], trans[3][3];
    matriz(mat);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %i", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    mattrans(mat, trans);
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf(" %i", trans[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
   