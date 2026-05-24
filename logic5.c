#include<stdio.h>
int main()
{
    int abc, bcb, cbc, dcb, big;
    scanf("%d %d %d %d",&abc,&bcb,&cbc,&dcb,&big);
    big=abc;
    if(big>bcb)
    big=bcb;
    if(big>cbc)
        big=cbc;
    if(big>dcb)
        big=dcb;
    printf("Big=%d",big);


}
