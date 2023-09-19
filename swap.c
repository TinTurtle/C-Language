#include <stdio.h>
int main()
{
    char a = 'X';
    char b = 'Y';
    char temp; //temporary variable 
    
    // swapping the values of a and b
    
    temp = a;
    a = b;
    b = temp;

    printf("\na = %c",a);  //a = Y
    printf("\nb = %c",b);  //b = X

    return 0;
}