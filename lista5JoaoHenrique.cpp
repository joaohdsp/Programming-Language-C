#include <stdio.h>
#include <string.h>
#include <math.h>

void fillMatriz(int matriz[5][6], int valorInicial, int incremento) {
    valorInicial = 1;
    incremento = 1;
    int val = valorInicial;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = val;
            val += incremento;
        }
    }
}

int main (){
/*

//EXERCÍCIO 1

int matriz[5][6];
int val;
int incremento;

printf("Me informe o número do primeiro valor \n");
scanf(" %i", &val);

printf("Me informe o número do incremento \n");
scanf(" %i", &incremento);

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 6; j++)
    {
        matriz[i][j] = val;
        val += incremento;
        
    }
    
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 6; j++)
    {
        printf(" %i", matriz[i][j]);
    }
        printf("\n");
}
*/
/*

//EXERCÍCIO 2

double val1, val2,resultado;
int opcao;
int run = 1;
do
{
    printf("Opção 0: Sair \n");
    printf("Opção 1: Somar valores \n");
    printf("Opção 2: Subtrair valores \n");
    printf("Opção 3: Multiplicar valores \n");
    printf("Opção 4: Dividir valores \n");
    printf("Opção 5: Calcular raíz quadrada \n");
    printf("Opção 6: Calcular potência \n");
    scanf(" %i", &opcao);

    switch (opcao)
    {
    case 0:
        printf("Saiu");
        run = 0;
        break;
    case 1:
        printf("Me informe o valor do primeito valor \n");
        scanf(" %lf", &val1);
        printf("Me informe o valor do segundo valor \n");
        scanf(" %lf", &val2);
        resultado = val1+val2;
        printf("O resultado é: %lf \n", resultado);
        break;
    case 2:
        printf("Me informe o valor do primeito valor \n");
        scanf(" %lf", &val1);
        printf("Me informe o valor do segundo valor \n");
        scanf(" %lf", &val2);
        resultado = val1-val2;
        printf("O resultado é: %lf \n", resultado);
        break;
    case 3:
        printf("Me informe o valor do primeito valor \n");
        scanf(" %lf", &val1);
        printf("Me informe o valor do segundo valor \n");
        scanf(" %lf", &val2);
        resultado = val1*val2;
        printf("O resultado é: %lf \n", resultado);
        break;
    case 4:
        printf("Me informe o valor do primeito valor \n");
        scanf(" %lf", &val1);
        printf("Me informe o valor do segundo valor \n");
        scanf(" %lf", &val2);
        resultado = val1/val2;
        printf("O resultado é: %lf \n", resultado);
        break;
    case 5:
        printf("Me informe o valor \n");
        scanf(" %lf", &val1);
        resultado = sqrt(val1);
        printf("O resultado é: %lf \n", resultado);
        break;
    case 6:
        printf("Me informe o valor \n");
        scanf(" %lf", &val1);
        resultado = val1*val1;
        printf("O resultado é: %lf \n", resultado);
        break;
    default:
        printf("Insira uma opção válida, por favor \n");
        break;
    }
} while (run);
*/
/*

//EXERCÍCIO 3

int n;

printf("Me informe o tamanho da matriz identidade \n");
scanf(" %i", &n);

int matriz[n][n];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i==j)
        {
            matriz[i][j]=1;
        }else{
            matriz[i][j]=0;
        }
        
    }
    
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf(" %i", matriz[i][j]);
    }
        printf("\n");
}
*/
/*

//EXERCÍCIO 4

int matrizA[8][5];
int matrizB[8][5];
for (int i = 0; i < 8; i++)
{
    for (int j = 0; j < 5; j++)
    {
        matrizA[i][j]=6;

        matrizB[i][j]=8;
    }
}
for (int j = 0; j < 5; j++)
{
    for (int i = 0; i < 8; i++)
    {
        printf(" %i", matrizA[i][j]);
    }
    printf("\n");
}
    printf("\n");
for (int j = 0; j < 5; j++)
{
    for (int i = 0; i < 8; i++)
    {
        printf(" %i", matrizB[i][j]);
    }
    printf("\n");
}
*/
/*

//EXERCÍCIO 5

char xadrez[8][8];

    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                xadrez[i][j] = 'B';  
            } else {
                xadrez[i][j] = 'P';  
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", xadrez[i][j]);
        }
        printf("\n");
    }
    */
   /*

    //EXERCÍCIO 6

   int matrizA[6][6], matrizB[6][6], opcao, run = 1, resultado;

   do
   {
    printf("Opção 0: Sair \n");
    printf("Opção 1: Somar matrizes \n");
    printf("Opção 2: Subtrair matrizes \n");
    printf("Opção 3: Multiplicar matrizes \n");
    printf("Opção 4: Calcular a matriz inversa \n");
    scanf(" %i", &opcao);

    switch (opcao)
    {
    case 0:
        printf("Saiu");
        run = 0;
        break;
    case 1:
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf("Me informe o valor da linha %i e coluna %i da matriz A \n", i, j);
                scanf(" %i", &matrizA[i][j]);
                printf("Me informe o valor da linha %i e coluna %i da matriz B \n", i, j);
                scanf(" %i", &matrizB[i][j]);
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                resultado = matrizA[i][j]+matrizB[i][j];
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf(" %i", resultado);
            }
            printf("\n");
        }
        break;
    case 2:
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf("Me informe o valor da linha %i e coluna %i da matriz A \n", i, j);
                scanf(" %i", &matrizA[i][j]);
                printf("Me informe o valor da linha %i e coluna %i da matriz B \n", i, j);
                scanf(" %i", &matrizB[i][j]);
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                resultado = matrizA[i][j]-matrizB[i][j];
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf(" %i", resultado);
            }
            printf("\n");
        }
        break;
    case 3:
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf("Me informe o valor da linha %i e coluna %i da matriz A \n", i, j);
                scanf(" %i", &matrizA[i][j]);
                printf("Me informe o valor da linha %i e coluna %i da matriz B \n", i, j);
                scanf(" %i", &matrizB[i][j]);
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                resultado = matrizA[i][j]*matrizB[i][j];
            }
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf(" %i", resultado);
            }
            printf("\n");
        }
        break;
    case 4:

        break;
    default:
        printf("Insira uma opção válida, por favor \n");
        break;
    }
   } while (run);
   */
  /*
    int matriz[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Me informe o valor da linha %i e coluna %i \n", i, j);
            scanf(" %i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %i", matriz[i][j]);
        }
            printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %i", matriz[j][i]);
        }
        printf("\n");
    }
   */
   fillMatriz(matriz[5][6], valorInicial, incremento);
    return 0;
}