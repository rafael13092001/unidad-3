#include <stdio.h>
int main() {
    int num1, num2, num3, num4, mayor;

    
    printf("Escriba el primer numero : \n");
    scanf("%d", &num1);
    printf("Escriba el segundo numero : \n");
    scanf("%d", &num2);
    printf("Escriba el tercer numero : \n");
    scanf("%d", &num3);
    printf("Escriba el cuarto numero : \n");
    scanf("%d", &num4);

    mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }

    printf("El mayor de todos los numeros es: %d", mayor);

    return 0;
}
