#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    
    int rand_num1 = (rand()%6)+1;
    int rand_num2 = (rand()%6)+1;

    printf("%d\n",rand_num1);
    printf("%d\n",rand_num2);
    return 0;
}