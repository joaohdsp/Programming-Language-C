#include <stdio.h>
#include <string.h>

int main (){
    /*
    EXERCÍCIO 1

    int vet [4] [4];
    int aux = 20;

    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 4; j++)
       {
        vet [i] [j] = aux;
        aux++;
       }
       
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        printf("%i  ", vet[i][j]);
        }
        printf("\n");
    }
    */
    /*
    EXERCÍCIO 2

    int vet [3] [5];
    
    for (int i = 0; i < 3; i++)
    {
        int aux = 100 - (i * 10);
        for (int j = 0; j < 5; j++)
        {
            vet [i] [j] = aux;
            aux = aux - 30;
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", vet[i][j]);
        }
        printf("\n");
    }
    */
    /*
    EXERCÍCIO 3

    int vet [6] [4];
    int num;
    for (int i = 0; i < 6; i++)
    {   
        for (int j = 0; j < 4; j++)
        {
            printf("Me informe o número \n");
            scanf(" %i", &num);
            vet [i][j] = num;
        }
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i  ", vet[i][j]);
        }
        printf("\n");
    }
    */
   /*
    EXERCÍCIO 4

    int vet1 [8] [8];
    int vet2 [8] [8];
    for (int i = 0; i < 8; i++)
    {
       for (int j = 0; j < 8; j++)
       {
        vet1[i][j] = 0;
        vet2[i][j] = 1;
       }
       
    }
    for (int i = 0; i < 8; i++)
    {
       for (int j = 0; j < 8; j++)
       {
        printf("%i  ", vet1[i][j]);
       }
       printf("\n");
    }
    for (int i = 0; i < 8; i++)
    {
       for (int j = 0; j < 8; j++)
       {
        printf("%i  ", vet2[i][j]);
       }
       printf("\n");
    }
    */
    /*
    ESXERCÍCIO 5

    int vet [5] [3];
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Me informe o número \n");
        scanf(" %i", &num);
            
        if (num<=100 || (num%2)!=0)
        {
            printf("Você não inseriu um número maior que 100 ou par \n");
            break;
        }

        for (int j = 0; j < 3; j++)
        {
           
        
            vet[i][j] = num;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            printf("%i ", vet[i][j]);
       }
       printf("\n");
    }
    */
    /*
    EXERCÍCIO 6

    int vet1[3][4];
    int vet2[3][4];
    int vetre[3][4];
    int num1, numMA;
    char cha;
       do {
        printf("Digite S para exibir o menu: ");
        scanf(" %c", &cha);

        printf("Opção 1 - somar matrizes\n");
        printf("Opção 2 - subtrair matrizes\n");
        printf("Opção 0 - sair\n");
        scanf("%i", &num1);

    } while (cha != 'S');   
    
    switch (num1)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    vetre[i][j] = vet1[i][j] + vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            
            
            break;
        
        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    vetre[i][j] = vet1[i][j] - vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            break;

        case 0:
            printf("SAIU \n");
            break;

        default:
            printf("Você não inseriu um número válido ");
            break;
        }
    */
    
    

    int vet1[3][3];
    int vet2[3][3];
    int vetre[3][4];
    int num1, numMA;
    char cha;
    
       do {
        printf("Digite S para exibir o menu: ");
        scanf(" %c", &cha);

        printf("Opção 1 - somar matrizes\n");
        printf("Opção 2 - subtrair matrizes\n");
        printf("Opção 3 - multiplicar matrizes\n");
        printf("Opção 4 - dividir matrizes\n");
        printf("Opção 0 - sair\n");
        scanf("%i", &num1);

    } while (cha != 'S');   
    
    switch (num1)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    vetre[i][j] = vet1[i][j] + vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            
            
            break;
        
        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    vetre[i][j] = vet1[i][j] - vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            break;

         case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    vetre[i][j] = vet1[i][j] * vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da primeira matriz \n");
                    scanf(" %i", &numMA);
                    vet1[i][j] = numMA;
                   
                }
        
            }
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Me informe o número da segunda matriz \n");
                    scanf("%i ", &numMA);
                    vet2[i][j] = numMA;
                   
                }
        
            }
                    
                    
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    vetre[i][j] = vet1[i][j] % vet2[i][j];
                }
                
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%i ", vetre[i][j]);
                }
                printf("\n");
            }
            break;

        case 0:
            printf("SAIU \n");
            break;

        default:
            printf("Você não inseriu um número válido ");
            break;
        }
        
     return 0;
}