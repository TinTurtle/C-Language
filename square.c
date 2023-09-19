#include <stdio.h>
#include <math.h>

double Square(double x)
{
    double s = pow(x,2);
    return s;

}
int main()
{
    double num = 4;
    double square = Square(num);
    printf("Result is %.2lf",square);
     
}