#include <stdio.h>

int main()
{
    int num, work_hour;
    double hour_salary, total_salary;

    scanf("%d %d %lf", &num, &work_hour, &hour_salary);

    total_salary = (work_hour * hour_salary);

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %0.2lf\n", total_salary);

    return 0;
}