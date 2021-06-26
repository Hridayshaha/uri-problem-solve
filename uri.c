#include <stdio.h>
int main(){

    const double PI = 3.14159;
    double R, VOLUME;
    scanf("%lf",&R);
    VOLUME = (4 / 3.0) * PI * (R * R * R);
    printf("VOLUME = %0.3lf\n",VOLUME);

    return 0;
}