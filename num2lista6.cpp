#include <stdio.h>
#include <string.h>
#include <math.h>

void vet(int vet1[20]){
    for (int i = 0; i < 20; i++)
    {
        printf("Me informe valor da posição %i do vetor \n", i);
        scanf(" %i", &vet1[i]);
    }
}
void maivp(int vet1[20], int *coleta){
    for (int i = 0; i < 20; i++)
    {
        if ((vet1[i] % 2)==0 && (vet1[i])> *coleta)
        {
            *coleta = vet1[i];
        } 
    }
}
void maivi(int vet1[20], int *coleta){
    for (int i = 0; i < 20; i++)
    {
        if ((vet1[i] % 2)!=0 && (vet1[i])> *coleta)
        {
            *coleta = vet1[i];
        } 
    }
}
void printresult(int coleta){
    printf("\n");
    printf("%i\n", coleta);
}
int main(){
   int vet1[20], run = 1, opcao, coleta = 0;
   vet(vet1);
do
{
    printf("\n");
    printf("Opção 0: Sair \n");
    printf("Opção 1: Encontrar maior valor par \n");
    printf("Opção 2: Encontrar maior valor ímpar \n");
    printf("Opção 3: Encontrar menor valor par \n");
    printf("Opção 4: Encontrar menor valor ímpar \n");
    scanf(" %i", &opcao);

    switch (opcao)
    {
    case 0:
        printf("Saiu");
        run = 0;
        break;
    case 1:
        maivp(vet1, &coleta);
        printresult(coleta);
        break;
    case 2:
        maivi(vet1, &coleta);
        printresult(coleta);
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    default:
        printf("Escolha uma opção válida \n");
        scanf(" %i", &opcao);
        break;
    }
} while (run);

    return 0;
}