#include <stdio.h>

int main() {
    int n;

    printf("Enter the length of sequences n (1 < n < 10000): ");
    scanf_s("%d", &n);

    if (n <= 1 || n >= 10000) {
        printf("n must be within 1 < n < 10000\n");
        return 1;
    }

    int result;
    if (n == 0) {
        result = 1;
    }
    else if (n == 1) {
        result = 2;
    }
    else if (n == 2) {
        result = 4;
    }
    else {
        int MOD = 12345;
        int dp0 = 1;  
        int dp1 = 2;  
        int dp2 = 4;  
        int current = 0;

        for (int i = 3; i <= n; i++) {
            current = (dp2 + dp1 + dp0) % MOD;
            dp0 = dp1;
            dp1 = dp2;
            dp2 = current;
        }

        result = dp2;
    }

    printf("Number of valid sequences of length %d: %d\n", n, result);

    return 0;
}
