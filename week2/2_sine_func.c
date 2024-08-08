// this program takes an input x and compute the sin(x)
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
    double x = 0.0;
    // Read x from input
    printf("Input a decimal point number between 0 and 1: ");
    scanf("%lf", &x);
    //printf("x: %lf, sin(s): %lf \n", x, sin(x));
    // Calculate the sine of given x
    printf("The sine of %lf is : %lf\n", x, sin(x));
    return 0;
}
