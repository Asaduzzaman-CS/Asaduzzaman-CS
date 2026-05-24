#include<stdio.h>
int main()
{
    int a,b,c,d,big;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    big=a;
    if(big<b)
        big=b;
        if(big<c)
            big=c;
        if(big<d)
            big=d;
        printf("Big=%d",big);


}
