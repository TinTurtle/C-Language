#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][10]={"Mustang","Supra","Eclipse","350Z"};
    /*
    arrray of strings is just a 2-D Array of single characters
    because a string itself is an Array of characters
    */
    //cars[0]="Skyline"; this statement is invalid , we instead use string functions to carry out problems like these
    strcpy(cars[0],"Skyline");
    
    for(int i=0;i<sizeof(cars)/sizeof(cars[0]);i++)
    {
        printf("\n%s",cars[i]);
    }
    return 0;
}