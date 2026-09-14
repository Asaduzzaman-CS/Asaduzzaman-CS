#include <stdio.h>

int main() {

    int total, minutes, hours, seconds;

    scanf("%d\n", &total);

    hours = total  / 3600;
    total = total % 3600;

    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
