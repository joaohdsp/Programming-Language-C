#include <stdio.h>
#include <string.h>
#include <math.h>
void coletaa(int vet[20]){
    for (int i = 0; i < 20; i++)
    {
        printf("Me informe o valor numero %i \n", i);
        scanf(" %i", &vet[i]);
    }
}
void maiorpar(int vet[20], int *aux){
    
    for (int i = 0; i < 20; i++)
    {   
        if ((vet[i]%2==0) && (vet[i]> *aux))
        {
            *aux = vet[i];
        }
    }
}
void maiorimpar(int vet[20], int *aux){
    
    for (int i = 0; i < 20; i++)
    {   
        if ((vet[i]%2!=0) && (vet[i]> *aux))
        {
            *aux = vet[i];
        }
    }
}
void menorpar(int vet[20], int *aux){
    *aux = vet[0];
    for (int i = 0; i < 20; i++)
    {    
        if ((vet[i]%2==0) && (vet[i]< *aux))
        {
            *aux = vet[i];
        }
    }
}
    
int main(){

    int vet[20], run = 1, op, aux, coleta = 0;
    coletaa(vet);

    do
    {
        printf("Opção 0: Sair \n");
        printf("Opção 1: Encontrar maior valor par \n");
        printf("Opção 2: Encontrar maior valor ímpar \n");
        printf("Opção 3: Encontrar menor valor par \n");
        printf("Opção 4: Encontrar menor valor ímpar \n");
        scanf(" %i", &op);
        
        switch (op)
        {
        case 0:
            printf("Saiu");
            op = 0;
            break;
        case 1:
            maiorpar(vet, &aux);

            break;
        case 2:
            maiorimpar(vet, &aux);
            break;
        case 3:
            menorpar(vet, &aux);
            printf(" %i", aux);
            printf("\n");
            break;
        case 4:
            
            break;
        default:
            printf("Por favor me informe um valor válido \n");
            scanf(" %i", &op);
            break;
        }
    } while (run);
    
    return 0;
}