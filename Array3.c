#include<stdio.h>
int main(){
int a[8]={22,33,44,55,66,77,00,52};
int i;
for(i=7;i>=0;--i){
    --a[i];
    printf("%d\n",a[i]);
    }
}
