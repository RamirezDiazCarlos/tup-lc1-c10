#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1, num2;

    printf("Ingrese el primer numero:");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El número %d es mayor que el numero %d", num1, num2);
    }

    else if (num2 > num1)
    {
        printf("El numero %d es mayor que %d", num2, num1);
    }

    else
    {
        printf("Los numeros son iguales\n");
    }

    system("pause");
}
