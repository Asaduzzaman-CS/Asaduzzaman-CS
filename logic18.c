#include<stdio.h>
#include<string.h>

int main()
{
    char x[20];

    printf("Enter the phone num identify: ");
    scanf("%s", x);

    if(strcmp(x,"Rommon") == 0)
        printf("65899");

    else if(strcmp(x,"Sohan") == 0)
        printf("97876");

    else if(strcmp(x,"Soyob") == 0)
        printf("88460");

    else if(strcmp(x,"Rafi") == 0)
        printf("53359");

    else
        printf("Unknown name");

    return 0;
}
