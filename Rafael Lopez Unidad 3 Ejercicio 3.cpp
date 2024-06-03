#include <stdio.h>

int main() {
    int opcion;
    float lado, base, altura, radio, area;

    printf("Selecciona la figura para poder calcular el area:\n");
    printf(" Cuadrado\n");
    printf(" Triangulo\n");
    printf(" Circulo\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Escriba la longitud del lado del cuadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El area del cuadrado es: %.2f\n", area);
            break;
        case 2:
            printf("Escriba la base del triangulo: ");
            scanf("%f", &base);
            printf("Escriba la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;
        case 3:
            printf("Escriba el radio del circulo: ");
            scanf("%f", &radio);
            area = 3.14159 * radio * radio;
            printf("El area del circulo es: %.2f\n", area);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
