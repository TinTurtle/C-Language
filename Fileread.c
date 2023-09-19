#include <stdio.h>
int main()
{
    FILE *pF = fopen("C:\\Users\\sivag\\OneDrive\\Desktop\\Fileedittest.txt", "r");

    char buffer[300];

    if(pF == NULL)
    {
        printf("File Invalid");
    }
    else
    {
        while(fgets(buffer, 300, pF) != NULL)
        {
            printf("\n %s",buffer);
        }
    }

    fclose(pF);

    return 0;
}