#include<stdio.h>
int main()
{
int z;
printf("Enter the value to test: ");
scanf("%d",&z);

if(z%5==0 || z%3==0 || z%7==0 && z%2==0)
printf("Even");
else
printf("ODD");

}
