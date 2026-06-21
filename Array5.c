#include<stdio.h>
int main (){

int ax[5]={10,30,50,20,80};
int i;

for(i=0;i<5;i++)
    ax[5-i]=ax[i];

 for(i=0;i<5;i++)
    printf("%d\n",ax[i]);

}
