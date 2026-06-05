#include<stdio.h>

int main() {
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error! Matrix multiplication not possible.\n");
        return 0;
    }


    printf("Enter elements of first matrix:\n");
    for (i = 0;i<r1;i++) {
        for (j=0;j<c1;j++) {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }


    printf("Enter elements of second matrix:\n");
    for (i=0;i<r2;i++) {
        for (j=0;j<c2;j++) {
                printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }


    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            result[i][j]=0;
        }
    }


    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            for (k=0;k<c1;k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }


    printf("\nResult Matrix:\n");
    for (i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
