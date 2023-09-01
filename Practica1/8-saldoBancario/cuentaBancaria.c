#include <stdio.h>
#include <stdlib.h>

int main()
{

    float saldo = 100000;
    float retiro;

    printf("Ingrese el monto a retirar: ");
    scanf("%f", &retiro);

    if (retiro < saldo)
    {
        saldo -= retiro;
        printf("Saldo restante: %.2f\n", saldo);
    }
    else
    {
        printf("Saldo insuficiente\n");
    }

    system("pause");
}