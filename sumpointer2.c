#include <stdio.h>
int main()
{
    int ar[] = {442,552,21,5,67,11,3};
    int *pAr, sum = 0;
    int l = sizeof(ar)/sizeof(ar[0]);

    for(pAr = ar;pAr<ar+l;pAr++)
    {
        sum += *pAr;
    }
    
    printf("%d",sum);
    return 0;
}