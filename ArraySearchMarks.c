#include<stdio.h>

int main()
{
    int marks[10], i, searchMark, found = 0;

    printf("Enter 10 marks:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Enter mark to search: ");
    scanf("%d", &searchMark);

    for(i = 0; i < 10; i++)
    {
        if(marks[i] == searchMark)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Mark Found at position %d\n", i + 1);
    else
        printf("Mark Not Found\n");

    return 0;
}
