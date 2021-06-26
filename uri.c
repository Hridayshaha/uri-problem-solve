#include <stdio.h>
int main(){

    double A, B, C, TRAINGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    const double PI = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    TRAINGULO = ( 1 / 2.0 ) * A * C;
    CIRCULO = PI * (C * C);
    TRAPEZIO = ((A + B) / 2.0) * C;
    QUADRADO = B * B;
    RETANGULO = A * B;

    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", TRAINGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

    return 0;
}