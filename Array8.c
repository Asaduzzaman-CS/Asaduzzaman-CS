#include <stdio.h>

int main() {
int ax[10], i, count = 0;
float sum = 0, average;

printf("Enter 10 marks:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &ax[i]);
sum += ax[i];
}

average = sum / 10;

for(i = 0; i < 10; i++) {
if(ax[i] > average)
count++;
}

printf("Average = %.2f\n", average);
printf("Marks greater than average = %d", count);

return 0;
}

