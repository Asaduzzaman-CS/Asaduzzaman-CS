#include<stdio.h>
int main(){
int A[3][4],B[3][4],C[3][4];
int i,j;

printf("Enter A matrix: \n");
for(i=0;i<3;i++)
   for(j=0;j<4;j++)
    scanf("%d",&A[i][j]);

   printf("Enter B matrix: \n");
   for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    scanf("%d",&B[i][j]);

   for(i=0;i<3;i++)
    for(j=0;j<4;j++)
{
  C[i][j]=A[i][j]+B[i][j];
}
    printf("Addition Matrix:\n");

for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d ",C[i][j]);
    }
    printf("\n");
}
 return 0;
}
