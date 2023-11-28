#include <stdio.h>
#define PI 3.14159

int main() {
    float base, altura, raio, diagonal1, diagonal2, lado1, lado2;
    
    // área do triângulo
    printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do Triângulo: %.2f\n", (base * altura) / 2);

    // área do quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado1);
    printf("Área do Quadrado: %.2f\n", lado1 * lado1);

    // área do losango
    printf("Digite as diagonais do losango: ");
    scanf("%f %f", &diagonal1, &diagonal2);
    printf("Área do Losango: %.2f\n", (diagonal1 * diagonal2) / 2);

    // área do retângulo
    printf("Digite os lados do retângulo: ");
    scanf("%f %f", &lado1, &lado2);
    printf("Área do Retângulo: %.2f\n", lado1 * lado2);

    // área do trapézio
    printf("Digite a base maior, a base menor e a altura do trapézio: ");
    scanf("%f %f %f", &base, &lado1, &altura);
    printf("Área do Trapézio: %.2f\n", ((base + lado1) / 2) * altura);

    // área do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Área do Círculo: %.2f\n", PI * raio * raio);

    return 0;
}
