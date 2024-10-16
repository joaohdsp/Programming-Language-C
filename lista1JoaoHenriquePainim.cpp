#include <stdio.h>
#include <string.h>
int main (){
    /*
    EXERCÍCIO 1

    int num1, num2, num3;
    char op;
    printf("Me informe o valor do número 1 \n");
    scanf(" %i", &num1);
    printf("Me informe o valor do número 1 \n");
    scanf(" %i", &num2);
    printf("Me informe o valor do número 1 \n");
    scanf(" %i", &num3);
    printf("Você deseja multiplicar(M) ou somar(S) esses números? \n");
    scanf(" %c", &op);
    int conta;
    switch (op)
    {
    case 'M':
    case 'm':
        conta = (num1*num2*num3);
        printf("O valor da multiplicação dos números é: %i \n", conta);
        break;
    
    case 'S':
    case 's':
        conta = (num1+num2+num3);
        printf("O valor da soma dos números é: %i \n", conta);
    default:
    printf("Você não informou uma operação válida \n");
        break;
    }
    */
   /*
    EXERCÍCIO 2

   double notaf;
   printf("Me informe o valor \n");
   scanf(" %lf", &notaf);
   double imposto;
   if (notaf<=999)
   {
    imposto = ((notaf * 2) / 100);
    printf("O valor inicial é %f e o valor do imposto é %f \n", notaf, imposto);
   } else if (notaf>=1000 && notaf<=2999){
    imposto = ((notaf * 2.5) / 100);
    printf("O valor inicial é %f e o valor do imposto é %f \n", notaf, imposto);
   } else if (notaf>=3000 && notaf<=6999){
    imposto = ((notaf * 2.8) / 100);
    printf("O valor inicial é %f e o valor do imposto é %f \n", notaf, imposto);
   } else if (notaf>=7000){
    imposto = ((notaf * 3) / 100);
    printf("O valor inicial é %f e o valor do imposto é %f \n", notaf, imposto);
   }
   */
  /*
EXERCÍCIO 3

  float nota1, nota2, nota3;
  float media; 

  printf("Me informe a nota 1 \n");
  scanf(" %f", &nota1);
  printf("Me informe a nota 2 \n");
  scanf(" %f", &nota2);
  printf("Me informe a nota da lista de exercícios \n");
  scanf(" %f", &nota3);
    if (nota1>10)
    {
        printf("Nota inválida \n");
    } else if (nota2>9){
        printf("Nota inválida \n");
    } else if (nota3>1){
        printf("Nota inválida \n");
    }
    media = ( ( (nota1 + 2) * (nota2 + nota3) ) / 3 );
    if (media<6)
    {
        printf("Você não foi aprovado \n");
    } else {
        printf("Você foi aprovado \n");
    }
    */
   /*
    EXERCÍCIO 4

   int val1 , val2;
   char op;
   int operacao;
   printf("Me informe qual operação você quer, somar(S), subtrair(B), multiplicar(M), dividir(D), Raíz quadrada(R) e Elevar ao quadrado(E)\n");
   scanf(" %c", &op);
   switch (op)
   {
   case 'S':
   case 's':
    printf("Me informe o valor do primeiro número \n");
    scanf(" %i", &val1);
    printf("Me informe o valor do segundo número \n");
    scanf(" %i", &val2);
    operacao = (val1+val2);
    printf("O resultado é %i \n", operacao);
    break;
   
   case 'B':
   case 'b':
    printf("Me informe o valor do primeiro número \n");
    scanf(" %i", &val1);
    printf("Me informe o valor do segundo número \n");
    scanf(" %i", &val2);
    operacao = (val1-val2);
    printf("O resultado é %i \n", operacao);
   break; 
   case 'M':
   case 'm':
    printf("Me informe o valor do primeiro número \n");
    scanf(" %i", &val1);
    printf("Me informe o valor do segundo número \n");
    scanf(" %i", &val2);
    operacao = (val1*val2);
    printf("O resultado é %i \n", operacao);
   break; 
   case 'D':
   case 'd':
    printf("Me informe o valor do primeiro número \n");
    scanf(" %i", &val1);
    printf("Me informe o valor do segundo número \n");
    scanf(" %i", &val2);
    operacao = (val1/val2);
    printf("O resultado é %i \n", operacao);
   break; 
   case 'R':
   case 'r':
    printf("Me informe o valor do número \n");
    scanf(" %i", &val1);
    operacao = (val1/2);
    printf("O resultado é %i \n", operacao);
    break;
   case 'E':
   case 'e':
    printf("Me informe o valor do número \n");
    scanf(" %i", &val1);
    operacao = (val1*val1);
    printf("O resultado é %i \n", operacao);
    break;
   default:
   printf("Você não inseriu um valor válido \n");
    break;
   } 
   */
  /*
    EXERCÍCIO 5

  char per;
  int val, des;
  printf("Qual período do dia? Manhã(M), Tarde(T) e Noite (N) \n");
  scanf(" %c", &per);
  switch (per)
  {
  case 'M':
  case 'm':
    printf("Qual o valor do produto? \n");
    scanf(" %i", &val);
    if (val>1000)
    {
        des = val - ((val * 10) / 100);
        printf("Bom dia \n");
        printf("Você ganhou 10 porcento de desconto e irá pagar %i \n", des);
    } else {
        des = val + ((val * 5) / 100);
        printf("Bom dia \n");
        printf("Você ganhou 5 porcento de acréscimo e irá pagar %i \n", des);
    }
    
    break;
  case 'T':
  case 't':
    printf("Qual o valor do produto? \n");
    scanf(" %i", &val);
    if (val<=500)
    {
        des = val + ((val * 5) / 100);
        printf("Boa tarde \n");
        printf("Você ganhou 5 porcento de acréscimo e irá pagar %i \n", des);
    } else if (val>=500 && val<=700){
        des = val - ((val * 7) / 100);
        printf("Boa tarde \n");
        printf("Você ganhou 7 porcento de desconto e irá pagar %i \n", des);
    } else {
        des = val - ((val * 10) / 100);
        printf("Boa tarde \n");
        printf("Você ganhou 10 porcento de desconto e irá pagar %i \n", des);
    }
    break;

  case 'N':
  case 'n':
    printf("Boa noite \n");
    printf("Desculpe, a loja está fechada, volte outro dia \n");
    break;
  default:
  printf("Você não inseriu um período válido \n");
    break;
  }
  */
    return 0;
}