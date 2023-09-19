#include<stdio.h>
int main()
{
    int a[2][3] = {{1,2,3},
                  {4,5,6}};
    int rows = sizeof(a)/sizeof(a[0]);
    int columns = sizeof(a[0])/sizeof(a[0][0]);
    int *p = NULL;
    for(p=&a[0][0];p<=&a[rows-1][columns-1];p++)
    {
        printf("%d ",*p);
    }
}
/*
p<=a[][]
is compulsory
*/