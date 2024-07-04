#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int distance = y - x;
    int steps = 0;
    int step_size = 1;
    int total_distance_covered = 0;

    while (total_distance_covered < distance) {
        steps++;
        total_distance_covered += step_size;
        if (total_distance_covered >= distance) break;
        steps++;
        total_distance_covered += step_size;
        step_size++;
    }

    return steps;
}

int main() {
    int x, y;
    printf("Enter the starting point x: ");
    scanf_s("%d", &x);
    printf("Enter the destination point y: ");
    scanf_s("%d", &y);

    if (x < 0 || y < 0 || x > y || y >= 2147483648) {
        printf("Invalid input! x should be less than or equal to y and 0 <= x <= y < 2^31.\n");
        return 1;
    }

    int result = minSteps(x, y);
    printf("Min steps from %d to %d: %d\n", x, y, result);
    return 0;
}
