#include <stdio.h>
#include <string.h>

int main (){
    /*

    NÚMERO 1

    int i = 20;
    while (i<=32)
    {
        printf("%i\n", i);
        i++;
    }
    */
   /*

   NÚMERO 2

   float i = 5;

    do {
        printf("%f\n", i);
        i -= 0.5;  
    } while (i >= 0);
   */
    /*
    NÚMERO 3
    char a;
    int i = 0;
    printf("Me informe uma letra \n");
    scanf(" %c", &a);
    while (i<=20)
    {
       printf("%c \n", a);
       i++;
    }
    */
   /*
   NÚMERO 4

   int i = 0;
   int v;
   int som = 0;
   do
   {
    printf("Me informe um número inteiro \n");
    scanf(" %i", &v); 
    som += v;
    i++;
   } while (i<=19);
   printf(" A soma dos valores: %i \n", som);
   */
    /*

    NÚMERO 5

    int i = 0;
    int v;

    printf("Me informe o valor inteiro \n");
    scanf("%d", &v);

    while (i <= v) {
        if (i % 2 == 0) {  
            printf("%d ", i);  
        }
        i++; 
    }
    */
   /*

   NÚMERO 6

    int v;

    printf("Me informe o valor inteiro \n");
    scanf("%d", &v);

    for (int i = 0; i <= 10; i++) {
        int c = v * i;
        printf("%d * %d = %d\n", v, i, c);

    }
    */
   /*
   NÚMERO 7
   int i = 0;
   int v;
   int array [10];

    while (i<=10)
    {
        printf("Me informe o número \n");
        scanf(" %i", &v);
        array[i]=v;
        i++;
    }

    int menor = array[0];
    int maior = array[0];

    i = 1;
    while (i < 10) {
        if (array[i] < menor) {
            menor = array[i];
        }
        if (array[i] > maior) {
            maior = array[i];
        }
        i++;
    }

    printf("O menor número informado é: %d\n", menor);
    printf("O maior número informado é: %d\n", maior);
    */
   
    char string[100];
    int i = 0, c = 0;
    char letra;

    printf("Digite uma string: ");
    scanf("%[^\n]", string);

    do {
        letra = string[i];
        if ((letra == 'a' || letra == 'A') || (letra == 'e' || letra == 'E') || (letra == 'i' || letra == 'I') || (letra == 'o' || letra == 'O') || (letra == 'u' || letra == 'U')) {
            c++;
        }
        i++;
    } while (string[i] != '\0');

    printf("A string tem %d vogais.\n", c);

    return 0;
}