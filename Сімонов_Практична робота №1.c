#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    int t1, t2, t3;
    double total_time;


    printf("������ �������� t1, t2, t3: ");
    scanf_s("%d %d %d", &t1, &t2, &t3);


    total_time = (double)(t1 + t2 + t3) / 3.0;


    printf("���������� ���: %.2lf\n", total_time);

    return 0;
}