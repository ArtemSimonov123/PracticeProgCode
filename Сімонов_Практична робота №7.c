#include <stdio.h>
#include <math.h>

int intersectionPoints(double x1, double y1, double r1, double x2, double y2, double r2) {
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (d == 0 && r1 == r2) {
        return -1; 
    }
    else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        return 0; 
    }
    else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        return 1; 
    }
    else {
        return 2; 
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("Enter coordinates and radius of both circles (x1 y1 r1 x2 y2 r2): ");
    scanf_s("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    int result = intersectionPoints(x1, y1, r1, x2, y2, r2);

    if (result == -1) {
        printf("Infinite number of points of intersection\n");
    }
    else {
        printf("Number of points of intersection: %d\n", result);
    }

    return 0;
}
