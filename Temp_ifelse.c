#include <stdio.h>
int main()
{
    char ch;
    double in;
    double temp;

    printf("\nEnter (F) or (C) for Farenheit or Celsius : \n");
    scanf("%c",&ch);
    ch = toupper(ch);
    if(ch == 'F')
    {
        printf("\nEnter temperature in celsius: \n");
        scanf("%lf",&in);
        temp = in*1.8+32.0;
        printf("\nTemperature in Farenherit is %.1lf",temp);
    }
    else if (ch == 'C')
    {
        printf("\nEnter temperature in farenheit: \n");
        scanf("%lf",&in);
        temp = (in-32.0)*5.0/9.0;
        printf("\nTemperature in Celsius is %.1lf",temp);
    }
    else
    {
        printf("\nInvalid Input! :( ");
    }
    
    
    return 0;

}