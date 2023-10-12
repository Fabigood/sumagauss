#include <stdio.h>
int main(){
    int num, sum = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num );

    if (num < 1) {
        printf("Numero no valido ingrese un numero valido .\n");
        }else{
        for (int i = 1; i<= num; i++) {
            sum += i;
        }

        printf("El resultado de %d es esto  %d\n", num , sum);
    }
    printf(" Gracias por usar el progrma; ");

    return 0;
}