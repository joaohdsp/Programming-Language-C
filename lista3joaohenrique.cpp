#include <stdio.h>
#include <string.h>

int main (){
    /*

    EXERCÍCIO 1

   for (int i = 26; i <= 132; i++) {
        printf("%i\n", i);
    }
    */
    /*

    EXERCÍCIO 2

    int vetor[20];
    
    for (int i = 0; i < 20; i++) {
        vetor[i] = i + 1;
    }
    
    for (int i = 19; i >= 0; i--) {
        printf("%i\n", vetor[i]);
    }
    */

    /*

    EXERCÍCIO 3

    int num1, num2;

    printf("Me informe um número \n");
    scanf(" %i", &num1);
    printf("Me informe outro número \n");
    scanf(" %i", &num2);

    if (num1>num2)
    {
        int diferenca = num1 - num2;
        int vetor[diferenca];
        
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = num2 + i;
        }
        
        for (int i = 0; i <= diferenca; i++)
        {
            printf("Número: %i\n", vetor[i]);
        }
        
    } else {

        int diferenca = num2 - num1;
        int vetor[diferenca];

        for (int i = 0; i <= diferenca; i++)
        {
           vetor[i] = num1 + i;
        }
        

        for (int i = 0; i <= diferenca; i++)
        {
            printf("Número: %i\n", vetor[i]);
        }
        
    }
    */
    /*

    EXERCÍCIO 4

    int num;
    printf("Me informe um valor \n");
    scanf(" %i", &num);
    if (num<30)
    {
        int diferenca = num + 10;
        int vetor[diferenca];

        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = i - 10;
        }
        for (int i = 0; i <= diferenca; i++)
        {
            printf("%i\n", vetor[i]);
        }
        
    } else if (num>30 && num<100){
        int diferenca = 100 - num;
        int vetor[diferenca + 1];

        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = 100 - i;
        }
        for (int i = 0; i <= diferenca ; i++)
        {
            printf("%i\n", vetor[i]);
        }
        
    } else if (num>100){
        int diferenca = num - 50;
        int vetor[diferenca];
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = 50 + i;
        }
        for (int i = 0; i <= diferenca; i++)
        {
            printf("%i\n", vetor[i]);
        }
        
    }
    */
   /*

    EXERCÍCIO 5

   char cha;
   int num;
   do
   {
    printf("OPÇÃO C: ORDEM CRESCENTE, OPÇÃO D: ORDEM DECRESCENTE E OPÇÃO S: SAIR");
    scanf(" %c", &cha);
   } while (cha!='S' && cha!='C' && cha!='D');
   
   switch (cha)
   {
   case 'C':
    printf("Me informe um número positivo inteiro\n");
    scanf(" %i", &num);
    if (num%2==0)
    {
        int diferenca = num - 2;
        int vetor[diferenca];
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = i + 2;
        }
        for (int i = 0; i <= diferenca; i++)
        {
            printf("%i\n", vetor[i]);
        }
        
    } else {
        int diferenca = num - 1;
        int vetor[diferenca];
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = i + 1;
        }
        for (int i = 0; i <= diferenca; i++)
        {
            printf("%i\n", vetor[i]);
        }
    }
    break;

   case 'D':
    printf("Me informe um número positivo inteiro\n");
    scanf(" %i", &num);
    if (num%2==0)
    {
        int diferenca = num - 2;
        int vetor[diferenca];
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = i + 2;
        }
        for (int i = diferenca; i >= 0; i--)
        {
            printf("%i\n", vetor[i]);
        }
        
    } else {
        int diferenca = num - 1;
        int vetor[diferenca];
        for (int i = 0; i <= diferenca; i++)
        {
            vetor[i] = i + 1;
        }
        for (int i = diferenca; i >= 0; i--)
        {
            printf("%i\n", vetor[i]);
        }
    }
   break;

   default:
   printf("Opção inválida \n");
    break;
   }
   */
    return 0;
}