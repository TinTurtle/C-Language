#include <stdio.h>
int main()
{
    int age; //Declaration
    age=18; //Initialization
    float score = 20.8; //Float //Declaration+Initialization
    char ch = 'c'; //Character
    char ar[] = "Nitish"; //An Array of Character
    printf("i am %d years old\n",age);
    printf("the temperature is %f outside\n",score);
    printf("grade is %c\n",ch);
    printf("name is %s\n",ar);
    printf("In %d years i got %c grade in maths",age,ch);
    
    return 0;
}