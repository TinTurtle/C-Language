#include <stdio.h>
int main()
{
    if(remove("Fileedittest.txt")==0)
    {
        printf("Deleted");
    }
    else
    {
        printf("not deleted");
    }

    return 0;
}