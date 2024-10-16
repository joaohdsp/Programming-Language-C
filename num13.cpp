#include <stdio.h>
#include <string.h>
#include <math.h>

void somapar(int vet[50], int *coleta){
    for (int i = 0; i < 50; i++)
    {
        if (vet[i]%2==0)
        {
            *coleta+=vet[i];
        }
    }
}
void multiimp(int vet[50], int *coleta){
    for (int i = 0; i < 50; i++)
    {
        if (vet[i]%2!=0)
        {
            *coleta*=vet[i];
        }
    }
}
int main(){
    int vet[50], coleta, op;
    for (int i = 0; i < 50; i++)
    {
        printf("Me informe o valor %i \n", i);
        scanf(" %i", &vet[i]);
    }
        printf("Op:");
        scanf(" %i", &op);

    switch (op)
    {
    case 1:
        somapar(vet, &coleta);
        printf("\n Soma par: %i \n", coleta);
        break;
    case 2:
        multiimp(vet, &coleta);
        printf("\n Soma par: %i \n", coleta);
        break;
    default:
        break;
    }
    return 0;
}