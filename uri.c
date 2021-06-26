#include <stdio.h>
int main(){

    float productPrice1, productPrice2, valueToPay1, valueToPay2, totalValueToPay;
    int code1, code2, unit1, unit2;
    scanf("%d %d %f", &code1, &unit1, &productPrice1);
    scanf("%d %d %f", &code2, &unit2, &productPrice2);

    valueToPay1 = unit1 * productPrice1;
    valueToPay2 = unit2 * productPrice2;

    totalValueToPay = valueToPay1 + valueToPay2;

    printf("VALOR A PAGAR: R$ %0.2f\n", totalValueToPay);

    return 0;
}