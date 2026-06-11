#include<stdio.h>

int main()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d",&digit);

    switch(digit)
    {

         case 0:
        printf("Zero\n");
          case 1:
        printf("One\n");
          case 2:
        printf("Two\n");
          case 3:
        printf("Three\n");
          case 4:
        printf("Four\n");
         default:
            printf("Invalid Digit\n");
    }
return 0;
}
