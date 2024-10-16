#include <stdio.h>
#include <string.h>
#include <math.h>
void input(int vet[8][4]){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Me informe o número de posição linha %i coluna %i \n", i, j);
            scanf(" %i", &vet[i][j]);
        }
    }
}
int main(){
    int vet[8][4], run = 1, op, op2, coleta[8];
    input(vet);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %i", vet[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("Opção 0: Sair \n");
        printf("Opção 1: Linha \n");
        printf("Opção 2: Coluna \n");
        scanf(" %i", &op);
        printf("\n");
        switch (op)
        {
        case 0:
            printf("Saiu");
            run = 0;
            break;
        case 1:
            printf("Qual linha? \n");
            scanf(" %i", &op2);
            switch (op2)
            {
            case 1:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==0)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 2:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==1)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 4; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 3:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==2)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 4:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==3)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 5:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==4)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 6:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==5)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 7:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==6)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 8:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i==7)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            default:
                printf("Escolha uma opção válida \n");
                scanf(" %i", &op);
                break;
            }
            break;
        case 2:
            printf("Qual coluna? \n");
            scanf(" %i", &op2);
            switch (op2)
            {
            case 1:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (j==0)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 2:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (j==1)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 3:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (j==2)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            case 4:
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (j==3)
                        {
                            coleta[i]=vet[i][j];
                        } 
                    }
                }
                printf("\n");
                for (int i = 0; i < 8; i++)
                {
                    printf("%i ", coleta[i]);
                }
                break;
            default:
                printf("Escolha uma opção válida \n");
                scanf(" %i", &op);
                break;
            }
            break;
            break;
        default:
            printf("Escolha uma opção válida \n");
            scanf(" %i", &op);
            break;
        }
    } while (run);
    
    return 0;
}