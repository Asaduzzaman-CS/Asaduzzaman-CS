#include<stdio.h>
int main(){
int balti, pant;
printf("Enter price: ");
scanf("%d %d",&balti,&pant);
if(balti<=199)
    printf("Ok buy it\n");
else
    printf("Sorry not buy it\n");
    if(pant<=300)
    printf("Ok buy it\n");
    else
        printf("Sorry not buy it");
}
