#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool primo(int num){
    bool ehprimo = true;
    printf("Me informe um número \n");
    scanf(" %i", &num);
    if (num<=1)
    {
        ehprimo=false;
    }else{
    
    for (int i = 2; i <= num / 2; i++)
    {
        if (num%i==0)
        {
            ehprimo = false;
            break;
        } 
    } 
    }
    return ehprimo;
}
int main(){

    int num;
    primo(num);

    if (&primo==false)
    {
        printf("O número informado não é primo \n");
    } else{
        printf("O número informado é um número primo \n");
    }
    


    return 0;
}