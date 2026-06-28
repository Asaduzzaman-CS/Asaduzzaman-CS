#include<stdio.h>
int main(){
char a, b, c;

printf("Enter Element: ");
scanf("%d %d %d",&a,&b,&c);
if(a<=b)
    printf("Hi\n");
else
    printf("Hello\n");
if(b<=a)
    printf("yes\n");
    else
    printf("No\n");
    if(c<=a)
        printf("Yes\n");
    else
        printf("Oh");
}
