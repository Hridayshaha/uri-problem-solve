#include <stdio.h>
int main(){

    char name;
    double fixedSalary, percentOfSale, TOTAL;
    scanf("%s %lf %lf" ,&name, &fixedSalary, &percentOfSale);
    TOTAL = fixedSalary + ((percentOfSale * 15) / 100);
    printf("TOTAL = R$ %0.2lf\n",TOTAL);


    return 0;
}