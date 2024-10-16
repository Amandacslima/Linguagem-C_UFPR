#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A função não toca o eixo, então não tem raízes\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (x1 == x2) {
            printf("A função só tem uma raiz em %.0lf\n", x1);
        } else {
            printf("As raízes desta função são %.0lf e %.0lf\n", x1, x2);
        }
    }

    return 0;
}
