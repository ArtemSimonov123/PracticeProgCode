#include <stdio.h>

int countNumbers(int p) {
    if (p < 1) return 0; 

    int total = 1 << p; 

    if (p >= 3) {
        int invalid = 2; 

        int valid = total - invalid;

        return valid;
    }

    return total; 
}

int main() {
    int p;
    printf("Enter the number of digits, p: ");
    scanf_s("%d", &p);

    int result = countNumbers(p);

    printf("Number of %d-digit numbers where three identical digits do not stand next to each other: %d\n", p, result);

    return 0;
}
