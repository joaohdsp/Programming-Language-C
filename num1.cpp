#include <stdio.h>
#include <string.h>
#include <math.h>

void funcao(int matriz[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Me informe o valor da linha %i e coluna %i \n", i, j);
            scanf(" %i", &matriz[i][j]);
        }
    }
}
void armazenarprimaria(int matriz[10][10], int vet1[10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==j)
            {
                vet1[i]=matriz[i][j];
            }
        }
    }
}
void armazenarsecundaria(int matriz[10][10], int vet2[10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i+j)==10)
            {
                vet2[i]=matriz[i][j];
            }
        }
    }
}
void printarprim(int vet1[10]){
    printf("Diagonal primária: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%i", vet1[i]);
    }
    
}
void printarsecun(int vet2[10]){
    printf("Diagonal secundária: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n %i", vet2[i]);
    }
    
}
int main(){

    int vet1[10], vet2[10], matriz[10][10];
    funcao(matriz);
    armazenarprimaria(matriz, vet1);
    armazenarsecundaria(matriz, vet2);
    printarprim(vet1);
    printf("\n");
    printarsecun(vet2);

    return 0;
}