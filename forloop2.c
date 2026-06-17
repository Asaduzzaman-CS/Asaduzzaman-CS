#include<stdio.h>

int main()
{
    int choice;
    float temp, ConvertedTemp;

    printf(" Temperature Converter \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
 case 1:
    {
        printf("Enter the Fahrenheit temperature: ");
        scanf("%f",&temp);
        ConvertedTemp=(temp-32)/1.8;
        printf("The temperature in Celsius is: %f\n", ConvertedTemp);
    }
    case 2:
    {
        printf("Enter the Celsius temperature: ");
        scanf("%f",&temp);
        ConvertedTemp=(1.8*temp)/32;
        printf("The temperature in Fahrenheit is: %f\n", ConvertedTemp);
    }
    default:
    {
    printf("Not a correct option: ");
    }

     }




}
