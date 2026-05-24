#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int i,n,count;
    gets(name);
    printf("%s",name);
    printf("\nLength=%d\n",strlen(name));
    n=strlen(name);
    count=0;
    for(i=0;i<n;i++)
        if((name[i]=='a')||(name[i]=='A'))
        count++;
    printf("Total a=10%d\n",count);
    printf("Output: ");
    for(i=0;i<n;i++)
        if(name[i]==32)
        printf("-");
    else
        printf("%c",name[i]);
}
