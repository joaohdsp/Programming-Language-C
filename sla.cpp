#include <stdio.h>
#include <string.h>
#include <math.h>
void brincadeirinha(int * ponteiro, int* valor){
    *ponteiro = *valor;
    *valor = 7;
    return;
}
int main(){
    int x = 10, y = 5;
    brincadeirinha(&x, &y);
    printf(" %i, %i", x, y);

    return 0;
}