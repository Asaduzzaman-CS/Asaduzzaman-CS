#include<stdio.h>

float seriesResistance(float r1, float r2)
{
    return r1 + r2;
}

int main()
{
    float r1, r2;

    printf("Enter two resistances: ");
    scanf("%f %f", &r1, &r2);

    printf("Equivalent Resistance (Series) = %.2f Ohm\n",
           seriesResistance(r1, r2));

    return 0;
}
