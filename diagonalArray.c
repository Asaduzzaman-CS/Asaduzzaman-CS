#include<stdio.h>
int main(){
int A[3][3],j,i,sum;
printf("\nEnter the element for the matrix \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("A[%d][%d]",i,j);
    scanf("%d",&A[i][j]);
    }
    }
   printf("\nEnter Matrix");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        printf("%d",A[i][j]);
    }
    printf("\n");
   }
   //sum of diagonal element
   printf("Diagonal elements");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {

        if(i=j)
            printf("%d",A[i][j]);
        sum=sum+A[i][j];
    }
    printf("sum of diagonal elements =%\n",sum);

   }
}
