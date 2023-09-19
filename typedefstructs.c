#include <stdio.h>

typedef struct 
{
    char name[25];
    char password[12];
    int id;
}User;


int main()
{
    User user1 = {"Kakakrot", "password1234", 670};
    User user2 = {"Vegeta", "password4567", 710};

    printf("\n%-12s",user1.name);
    printf("\t%d",user1.id);
    
    printf("\n%-12s",user2.name);
    printf("\t%d",user2.id);
}