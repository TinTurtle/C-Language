#include <stdio.h>
int main()
{
    int age = 21;
    int *pAge = &age;

    printf("Address of age : %p\n",&age);
    printf("Value of pAge : %p\n", pAge);

    printf("Size of age : %d\n", sizeof(age));
    printf("Size of pAge : %d\n", sizeof(pAge));

    printf("Value at address : %d\n", *pAge);
    printf("Value of age : %d\n",age);

    return 0;
}