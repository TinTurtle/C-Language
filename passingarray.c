#include <stdio.h>
int sumArray(int b[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum += b[i];
    }
    return sum;
}
int main()
{
    int a[] = {11,23,5,76,35,12,78};
    int l =sizeof(a)/sizeof(a[0]);
    printf("\nSum : %d",sumArray(a,l));
    return 0;
}