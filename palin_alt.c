#include <stdio.h>
#include <string.h>

int main()
{
    int k=0;
    char word[50];

    printf("\nEnter a Word to check is it's a Palindrome?");
    scanf("%s",&word);
    
    strlwr(word);
    const int l = strlen(word);

    if(l%2 == 0) //eben
    {
        for(int i=0;i<l-2;i++)
        {
            if(word[i]==word[l-i-1])
            {
                k++;   //counter
            }
        }
        if(k==l-2)
        {
            printf("\nPalindrome!");
        }
        else
        {
            printf("\nNot Palindrome.");
        }
    }
    else //obb
    {
        for(int i=0;i<l-3;i++)
        {
            if(word[i]==word[l-i-1])
            {
                k++;
            }
        }
        if(k==l-3)
        {
            printf("\nPalindrome!");
        }
        else
        {
            printf("\nNot Palindrome.");
        }
    }
    
    return 0;
}