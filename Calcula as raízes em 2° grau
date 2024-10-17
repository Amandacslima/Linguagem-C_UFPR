#include <stdio.h>
#include <math.h>

// Função para calcular o delta
double calcularDelta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equacao de 2o grau (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = calcularDelta(a, b, c);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real e dupla: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }

    return 0;
}
