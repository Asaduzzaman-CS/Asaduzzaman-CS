#include<stdio.h>

float Area(float radius)
{
    return 3.1416 * radius * radius;
}

int main()
{
    float r1, r2, r3;

    printf("Enter radius of 3 circles: ");
    scanf("%f %f %f", &r1, &r2, &r3);

    printf("Area of Circle 1 = %.2f\n", Area(r1));
    printf("Area of Circle 2 = %.2f\n", Area(r2));
    printf("Area of Circle 3 = %.2f\n", Area(r3));

    return 0;
}
