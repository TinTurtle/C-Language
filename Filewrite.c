#include <stdio.h>
int main()
{
    FILE *pF = fopen("C:\\Users\\sivag\\OneDrive\\Desktop\\Fileedittest.txt","a");
    
    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);

    return 0;
}