#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    if(a%3==0 || a%6==0)
        printf("The number is divisible by 3 or 5 ");
    else
        printf("The number is not divisible by 3 or 5 ");
}
