#include <stdio.h>
#include <string.h>
#include <math.h>

void input(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        printf("Me informe o número da posição %i do vetor \n", i);
        scanf(" %i", &vet[i]);
    }
}
void pardobro(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        if (vet[i]%2==0)
        {
            vet[i] = vet[i] * 2;
        }
    }
}
void triplo(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        vet[i] = vet[i] * 3;
    }
}
void add20(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        vet[i]+=20;
    }
}
void maior5por0(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        if (vet[i]>5)
        {
            vet[i] = 0;
        }
    }
}
void inter530(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        if (vet[i]>5 && vet[i]<30)
        {
            vet[i] = 60;
        }
    }
}
void printar(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        printf(" %i\n", vet[i]);
    }
}
int main(){
    int vet[20], run = 1, op;
    input(vet);

    for (int i = 0; i < 20; i++)
    {
        printf(" %i\n", vet[i]);
    }
    printf("\n");
do
{
    printf("Opção 0: Sair\n");
    printf("Opção 1: Substituir todos os elementos pares pelo seu dobro \n");
    printf("Opção 2: Substituir todos os elementos pelo seu triplo \n");
    printf("Opção 3: Substituir todos os elementos por ele mesmo adicionado a 20 \n");
    printf("Opção 4: Substituir todos os valores maiores que 5 por 0\n");
    printf("Opção 5: Substituir todos os elementos no intervalo de 5 a 30 por 60 \n");
    scanf(" %i", &op);
    switch (op)
    {
    case 0:
        printf("Saiu");
        run = 0;
        break;
    case 1:
        pardobro(vet);
        printar(vet);
        printf("\n");
        break;
    case 2:
        triplo(vet);
        printar(vet);
        printf("\n");
        break;
    case 3:
        add20(vet);
        printar(vet);
        printf("\n");
        break;
    case 4:
        maior5por0(vet);
        printar(vet);
        printf("\n");
        break;
    case 5:
        inter530(vet);
        printar(vet);
        printf("\n");
        break;
    default:
        printf("Me informe uma opção válida \n");
        scanf(" %i", &op);
        break;
    }
} while (run);

    return 0;
}