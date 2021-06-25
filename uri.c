#include <stdio.h>
int main(){

    int employeeNumber, workedHour;
    float perHourSalary, SALARY;
    scanf("%d %d %f", &employeeNumber, &workedHour, &perHourSalary);
    SALARY = perHourSalary * workedHour;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", employeeNumber, SALARY);

    return 0;
}