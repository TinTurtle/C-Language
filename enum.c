#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    enum Day today = Sun;
    if(today == 1||today == 7)
    {
        printf("\nWeekend!");
    }   
    else
    {
        printf("\nWeekday :(");
    }
}