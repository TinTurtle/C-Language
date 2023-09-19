#include <stdio.h>
#include <string.h>
struct Player
{
    char name[25];
    int score;
};

int main()
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Kakarot");
    player1.score = 90;

    strcpy(player2.name,"Vegeta");
    player2.score = 85;
    
    printf("\n%s ",player1.name);
    printf("%d",player1.score);

    printf("\n%s ",player2.name);
    printf("%d",player2.score);
    return 0;
}