#include <stdio.h>
void printage(int *pAge)
{
    printf("\nyou are %d years old",*pAge); //dereferencing
}
int main()
{
    int age = 21;
    int *pAge = NULL;
    *pAge = &age;
    printage(pAge);

    return 0;
}