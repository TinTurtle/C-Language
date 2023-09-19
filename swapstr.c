#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "Mustang";
    char s2[20] = "Skyline";
    char temp[20];

    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);

    printf("\ns1 = %s",s1);
    printf("\ns2 = %s",s2);
    return 0;
}
