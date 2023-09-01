#include <stdio.h>
#include <stdlib.h>

int main()
{

    float montoVenta;
    
    

    printf("Ingrese el monto de la venta: ");
    scanf("%f", &montoVenta);

    if (montoVenta > 0)
    {
        if (montoVenta >= 100000)
        {   
            float descuento15 = montoVenta * 0.15;
            float total = montoVenta - descuento15;
            printf("El total con descuento del 15 porciento es %.2f\n", total);
        }
        else
        {
            float descuento10 = montoVenta * 0.10;
            float total = montoVenta - descuento10;
            printf("El total con descuento del 10 porciento es %.2f\n", total);
        }
    }
    else
    {
        printf("Monto no valido\n");
    }

system("pause");

}