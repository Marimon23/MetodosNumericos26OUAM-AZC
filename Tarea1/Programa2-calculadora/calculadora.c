#include <stdio.h>

int main (void)
{
    double x;
    double y;
    char operacion;

    printf("Escribe el primer numero: ");
    scanf("%lf", &x);

    printf("Escribe el segundo numero: ");
    scanf("%lf", &y);

    printf("Escribe la operacion (+, -, *, /): ");
    scanf(" %c", &operacion);

    if (operacion == '+')
    {
        printf("Resultado: %.2f\n", x + y);
    }
    else if (operacion == '-')
    {
        printf("Resultado: %.2f\n", x - y);
    }
    else if (operacion == '*')
    {
        printf("Resultado: %.2f\n", x * y);
    }
    else if (operacion == '/')
    {
        printf("Resultado: %.2f\n", x / y);
    }
    else
    {
        printf("Operacion no valida\n");
    }

    return 0;
}