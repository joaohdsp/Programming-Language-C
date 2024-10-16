#include <stdio.h>
#include <string.h>
void vet(int vet1[20]){
    for (int i = 0; i < 20; i++)
    {
        printf("Me informe valor da posição %i do vetor \n", i);
        scanf(" %i", &vet1[i]);
    }
}
void maivp(int vet1[20], int coleta){
    for (int i = 0; i < 20; i++)
    {
        if ((vet1[i] % 2)==0 && (vet1[i])>coleta)
        {
            coleta = vet1[i];
        } 
    }
}

int main (){
    int vet1[20], coleta = 0;;
    vet(vet1);
    maivp(vet1, coleta);
    printf("\n");
    printf("%i\n", coleta);
    return 0; 
}



