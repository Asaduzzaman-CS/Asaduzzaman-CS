#include<stdio.h>

int main()
{
    int A[3][3], i, j;
    int upperSum = 0, lowerSum = 0;

    printf("Enter the elements of the matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                upperSum += A[i][j];
            }

            if(i>j)
            {
                lowerSum += A[i][j];
            }
        }
    }

    printf("\nSum of Upper Triangle = %d\n", upperSum);
    printf("Sum of Lower Triangle = %d\n", lowerSum);

    return 0;
}
