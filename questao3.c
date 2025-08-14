#include <stdio.h>
#include <stdio.h>


int main(){

    int km = 0;

    printf("Informe sua velocidade atual: ");
    scanf("%d", &km);
    if(km >= 75){
        printf("%d KM Acima da velocidade: MULTA E MENOS 5 PONTOS NA CARTEIRA \n", km);
    } else if (km < 75 && km >= 65){
        printf("%d KM Voce ta um pouco veloz diminua a velocidade \n", km);
    } else if (km < 65 && km >= 55){
        printf("%d KM Velocidade Normal continue assim \n", km);
    } else if (km < 55 && km >= 45){
        printf("%d KM Velocidade um pouco baixa aumente porfavor \n", km);
    } else{
        printf("%d KM Trafego mais rapido \n", km);
    }
}
