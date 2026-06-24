#include <stdio.h>
int main() {
int ax[10], i, lowest;

printf("Enter 10 marks:\n");
for(i = 0; i < 10; i++)
scanf("%d", &ax[i]);

lowest = ax[0];

for(i = 1; i < 10; i++) {
if(ax[i] < lowest)
lowest = ax[i];
}

printf("Lowest Marks = %d", lowest);

return 0;
}

