#include <stdio.h>
#include <string.h>
#include <math.h>

void input(int vet1[20]){
    for (int i = 0; i < 20; i++)
    {
        printf("Insira o número posição %i \n", i);
        scanf(" %i", &vet1[i]);
    }
}
void trasprafrente(int vet1[20], int vet2[20]){
    for (int i = 0; i < 20 ; i++)
    {
            vet2[i]=vet1[19 - i];
            
    }
}
int main(){
    int vet1[20], vet2[20];
    input(vet1);
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", vet1[i]);
    }
    printf("\n");
    trasprafrente(vet1, vet2);
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", vet2[i]);
    }
    
    return 0;
}