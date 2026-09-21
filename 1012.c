#include <stdio.h>

int main()
{
    double A, B, R;
    double triangle, circle, trapezium, square, rectangle;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &R);

    triangle = 0.5 * A * R;
    circle = pi * R * R;
    trapezium = (A + B) / 2.0 * R;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}