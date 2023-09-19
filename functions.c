#include <stdio.h>
void birthday(char x[],int y) // funtion with PARAMETERS 
{
    
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to Dear.....%s",x);
    printf("\nHappy birthday to you");
    printf("\nyou are %d years old!",y);
}

int main()
{
    int age = 18;
    char name[] = "Nitish";
    birthday(name,age); // calling of function and passing values to the PARAMETERS as ARGUMENTS
    return 0;
}