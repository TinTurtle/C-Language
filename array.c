#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int j;
    double prices[10] = {10., 15.0, 20.0, 25.0, 30.0};
    
    
    
    for(i=0;i<sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("$%.2lf\n",prices[i]);
    }

    return 0;
} 