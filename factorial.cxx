#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
    } else {
        printf("El factorial de %d es %llu\n", num, factorial(num));
    }

    return 0;
}