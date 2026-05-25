#include<stdio.h>
int main()
{
    int a[7];
    a[0]=4;
    a[1]=8;
    a[2]=20;
    a[3]=22;
    a[4]=26;
    a[5]=29;
    a[6]=30;
    int x=a[0]+a[6]+a[3]+a[5]-a[1];
    printf("%d\n",x);

}
