#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void input(int a, int b, int c){
    printf("Me informe o lado A \n");
    scanf(" %i", &a);
    printf("Me informe o lado B \n");
    scanf(" %i", &b);
    printf("Me informe o lado C \n");
    scanf(" %i", &c);
}
void checagem(int a, int b, int c){
    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("1\n");
    }
    
}
int main(){
    int a, b, c;
    input(a, b, c);
    checagem(a, b, c);
    return 0;
}