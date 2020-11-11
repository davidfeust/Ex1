#include <stdio.h>
#include "myMath.h"

int main() {
    printf("Please inset a real number:\n");
    double x;
    scanf("%lf", &x);


    printf("The value of f(x) = e^x + x^3 − 2 at the point %.4lf is: %.4lf\n", x,
           sub(add((float) Exp((int) x), (float) Pow(x, 3)), 2));

    printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is: %.4lf\n", x,
           add((float) mul(x, 3), (float) mul(Pow(x, 2), 2)));

    printf("The value of f(x) = (4x^3) / 5 - 2x at the point %.4lf is: %.4lf\n", x,
           sub((float)div((mul(Pow(x, 3), 4)), 5), (float)mul(x, 2)));

    return 0;
}