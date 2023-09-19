#include <stdio.h>
int FindMax(int x, int y)
{
    /*
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
   return (x>y)?x:y;
}

int main()
{
    int max = FindMax(25,69);
    printf("Maximum no. is %d",max);
    return 0;
}