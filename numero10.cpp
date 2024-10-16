#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
void vector (float vet[30]){
    for (int i = 0; i < 30; i++)
    {
        printf("Me informe o número de posição %i do vetor \n", i);
        scanf(" %f", &vet[i]);
    }
}
void maior(float vet[30], float *maiorv){
    *maiorv=vet[0];
    for (int i = 0; i < 30; i++)
    {
        if (vet[i]> *maiorv)
        {
            *maiorv=vet[i];
        }
    }
}
void menor(float vet[30], float *menorv){
    *menorv=vet[0];
    for (int i = 0; i < 30; i++)
    {
        if (vet[i]< *menorv)
        {
            *menorv=vet[i];
        }
    }
}
int main(){
    float vet[30], maiorv, menorv;
    vector(vet);
    printf("\n");
    maior(vet, &maiorv);
    menor(vet, &menorv);
    printf("Maior: %.2f\n", maiorv);
    printf("Menor: %.2f\n", menorv);
    return 0;
}