#include <stdio.h>
#include <math.h>
int main()
{
    double a = sqrt(9);
    double b = pow(2,5);
    int c = round(3.14); //rounds off to nearest integer
    int d = ceil(3.14); // rounds up
    int e = floor(3.99); //rounds down
    double f = fabs(-100); // absolute value
    double g = log(10); //logarithmic function
    double h = sin(30); 
    double j = cos(60);     //trigonometric functions
    double k = tan(45);
    printf("\n%lf",a);
    printf("\n%lf",b);
    printf("\n%d",c);
    printf("\n%d",d);
    printf("\n%d",e);
    printf("\n%lf",f);
    printf("\n%lf",g);
    printf("\n%lf",h);
    printf("\n%lf",j);
    printf("\n%lf",k);
    return 0;

}