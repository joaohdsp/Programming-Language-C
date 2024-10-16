#include <stdio.h>
#include <string.h>
#include <math.h>
void input(char vet[8]){
    for (int i = 0; i < 8; i++)
    {
        printf("Me informe o número da posição %i \n", i);
        scanf(" %c", &vet[i]);
    }
}
void storage(char vet[8], char vet2[8]){
    for (int i = 7; i >= 0; i--)
    {
        vet2[7 - i] = vet[i];
    }
}
int main(){
    char vet[8], vet2[8];
    input(vet);
    for (int i = 0; i < 8; i++)
    {
        printf("%c ", vet[i]);
    }
    printf("\n");
    storage(vet, vet2);
    for (int i = 0; i < 8; i++)
    {
        printf("%c ", vet2[i]);
    }
    
    return 0;
}