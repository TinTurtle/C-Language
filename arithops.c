#include<stdio.h>
int main()
{
    int a = 2;
    int f = 5;

    int sum = a + f;   //Addition  '+'
    int diff = f - a;  //Subtraction '-'
    double product = a * f;    //Multiplication '*'
    double quotient = f /(double) a ;   //Division '\' (the output would be 2 if it was a int variable)
    int remainder = f % a ;   //Modulus '%'
    a++; //Increment '++'
    f--; //Decrement '--'
    
    printf("\n%d",sum);
    printf("\n%d",diff);
    printf("\n%.2lf",product);
    printf("\n%.2lf",quotient);
    printf("\n%d",remainder);
    printf("\n%d",a);
    printf("\n%d",f);

    return 0;
}
    
