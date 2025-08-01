#include <stdio.h>



int main(){
    int num, six, soma, subtracao, multiplicacao, divisao, resto, testa;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num);

    printf("Informe o segundo numero: ");
    scanf("%d", &six);

    printf("Que operacao com %d e %d voce deseja realizar: \n 1.Soma \n 2.Subtracao \n 3.Multiplicacao \n 4. Divisao \n 5.Resto \n", num,six);
    scanf("%d", &testa);

    switch (testa){
        case 1:{
            soma = num + six;
            printf("A soma e %d \n", soma);
            break;
        }
        case 2:{
            subtracao= num - six;
            printf("A subtracao e %d \n", subtracao);
            break;
        }
        case 3:{
            multiplicacao = num * six;
            printf("A multiplicacao e %d \n", multiplicacao);
            break;
        }
        case 4:{
            divisao = num / six;
            printf("A divisao inteira e %d \n", divisao);
            break;
        }
        default:{
            resto = num % six;
            printf("O resto e %d \n", resto);
            break;
        }
    };
}
