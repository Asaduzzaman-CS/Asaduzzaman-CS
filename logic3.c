#include<stdio.h>
int main()
{
    int rabiya;
    printf("Enter th e value to test: ");
    scanf("%d", &rabiya);

    if(rabiya%5==0 || rabiya%3==0 || rabiya%7==0 || rabiya%2==0 && rabiya%8==0)
        printf("Even");

    else
        printf("ODD");
}


