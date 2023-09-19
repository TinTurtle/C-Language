#include <stdio.h>

typedef char User[25]; // an array of characters with 25 bytes is defined to the nickname User
int main()
{
    User user1 = "Nitish";  //instead of writing, char user1[25]
    printf("%s",user1);
    return 0;
}