#include <stdio.h>
#include <stdlib.h>


int main(){

    int le =0, maior = 0, quant = 0;
    for (int i = 1; i <= 7; i++){
        printf("Digite um numero: ");
        scanf("%d", &le);
        if(le > maior){
            maior = le;
        }
        quant++;
    }
    printf("O maior dos numeros digitados e: %d ele foi lido %d vezes \n", maior, quant);

}
