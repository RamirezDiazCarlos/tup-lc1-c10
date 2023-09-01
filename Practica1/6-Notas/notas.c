#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    printf("Escribe la nota del alumno: ");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10)
    {
        if (nota < 4)
        {
            printf("Alumno reprobado\n");
        }
        else if (nota < 6 && nota >= 4)
        {
            printf("Alumno Regular\n");
        }
        else
        {
            printf("Alumno Promocionado\n");
        }
    }

    else
    {
        printf("Nota invalida\n");
    }

    system("pause");
}