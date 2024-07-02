#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    
    printf("Введіть значення t1, t2, t3: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    
    total_time = (double)(t1 + t2 + t3) / 3.0;

 
    printf("Час в годинах: %.2lf\n", total_time);

    return 0;
}
