#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float num1;

    printf("Ingrese el numero:");
    scanf("%f", &num1);

    if (num1>0)
    {
        printf("El numero %f es positivo \n", num1);
    }

    else if (num1 < 0)
    {
        printf("El numero %f es negativo \n", num1);
    }

    else
    {
        printf("El numero es nulo \n");
    }

    system("pause");
}