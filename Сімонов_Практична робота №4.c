#include <stdio.h>

int main() {
    int n;

    printf("Enter a natural number n (1 < n < 150): ");
    scanf_s("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Number n must be within 1 < n < 150\n");
        return 1;
    }

    int count = 0;

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("The number of equal divisors of %d: %d\n", n, count);

    return 0;
}
