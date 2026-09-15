#include <stdio.h>

int main() {

    int time, speed;
    float distance, fuel;

    scanf("%d", &speed);
    scanf("%d", &time);

    distance = time * speed;
    fuel = distance / 12.0;

    printf("%.3f\n", fuel);


    return 0;
}
