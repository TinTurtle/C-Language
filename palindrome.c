#include <stdio.h>
#include <string.h>
/*
!! OC !!
works by checking the nth character from the left and the corresponding character from the right for equality
and then adds a no. to the counter if true.
*/

//testing not done....

int main()
{
    int i;
    int j;
    int k=1;
    char word[50];

    printf("\nEnter a Word to check is it's a Palindrome?\n");
    scanf("%s",&word);
    
    if(strlen(word)%2 == 0) //eben
    {
        for(i=0;i<strlen(word)-2;i++)
        {
            if(word[i]==word[strlen(word)-1])
            {
                k++;   //counter
            }
        }
    }
    else //obb
    {
        for(i=0;i<strlen(word)-3;i++)
        {
            if(word[i]==word[strlen(word)-1])
            {
                k++;
            }
        }
    }
    
    if(k==strlen(word)-2||k==strlen(word)-3)
    {
        printf("\nPalindrome!");
    }
    else
    {
        printf("\nNot Plaindrome! ");
    }

    return 0;
}