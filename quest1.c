#include <stdio.h>


int main(){
    int n, dm, um, c, d, tes;


    printf("Informe um numero: \n");
    scanf("%d", &n);

    if (n<10000 || n>99999)
    {

        printf("digite numero valido");
        return;

    }
    

    dm = n / 10000;
    tes = n % 10000;
    um = tes / 1000;
    tes = n % 1000;
    c = tes / 100;
    tes = n % 100;
    d = tes / 10;
    tes = n % 10;

    printf("%d   %d   %d   %d   %d \n", dm, um, c, d , tes);
}
