#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int age;

    printf("What is your name ?\n");
    //scanf("%s",&name);  //this will not read the full name with space
    fgets(name, 25, stdin); // does not stop at whitespace but does add a \n char to the string
    name[strlen(name)-1]='\0'; // used to remove the \n char from the string

    printf("\nhow old are you?\n");
    scanf("%d",&age); //read only till whitespace
    
    printf("\nyou are %d years old",age);
    printf("\nHello %s, How are you?",name );
    return 0;
}