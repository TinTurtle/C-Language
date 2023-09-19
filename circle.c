#include <stdio.h>
#include <math.h>
int main()
{
    const double PI = 3.14;
    double r;
    double c;
    double a;

    printf("\nenter the radius of the value");
    scanf("\n%lf",&r);

    c = 2*PI*r;
    a = PI*r*r;

    printf("\nCircumference of the circle is %lf",c);
    printf("\nArea of the circle is %lf",a);

    return 0;
}