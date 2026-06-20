#include <stdio.h>

int main() {
    int ax[10], i, highest;

    printf("Enter 10 marks:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &ax[i]);

    highest = ax[0];

    for(i = 1; i < 10; i++) {
        if(ax[i] > highest)
            highest = ax[i];
    }

    printf("Highest Marks = %d", highest);

    return 0;
}

