#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b; 
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf_s("%d", &n);

    if (n < 2 || n > 20) {
        printf("Number of integers must be between 2 and 20.\n");
        return 1;
    }

    int arr[20]; 
    printf("Enter the integers separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    printf("The least common multiple is: %d\n", result);

    return 0;
}
