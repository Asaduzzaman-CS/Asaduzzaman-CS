#include <stdio.h>

int main() {
int ax[10], i;
float sum = 0, average;

printf("Enter 10 marks:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &ax[i]);
sum += ax[i];
}

average = sum / 10;

printf("Average Marks = %.2f", average);

return 0;
}

