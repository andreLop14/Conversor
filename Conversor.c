#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    
    // Tasas de cambio aproximadas (GTQ como base)
    float usd_a_gtq = 7.75;
    float eur_a_gtq = 8.40;

    printf("--- CONVERSOR DE MONEDAS ---\n");
    printf("1. Dólares (USD) a Quetzales (GTQ)\n");
    printf("2. Euros (EUR) a Quetzales (GTQ)\n");
    printf("3. Quetzales (GTQ) a Dólares (USD)\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * usd_a_gtq;
            printf("%.2f USD equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * eur_a_gtq;
            printf("%.2f EUR equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad / usd_a_gtq;
            printf("%.2f GTQ equivalen a %.2f USD\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}