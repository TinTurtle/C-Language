#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a = 'N'; //single character %c 
    char b[]= "Nitish"; //an array of characters %s

    int x = 696; //integer value %d (-2147483648 to 2147483647)
    unsigned int j = 4294967295; //(0 to 44294967295)

    short int h = 32767; //integers betn (-32768 to 32767)
    unsigned short int i = 54635;   //betn (0 to 65535)
    long long int l = 923443306789102; //(-9 quintillion to 9 quintillion)
    unsigned long long int m = 180000000000000000; //(0 to 18 quintillion)

    float y = 93.5;  //floating value with single precision %f
    double z = 67.893947482; //double precision float %lf

    bool e = true; //boolean value True/false %d

    char f = 100; //(-128 to 127) %d or %c
    unsigned char g = 255;

    printf("character %c\n",a);
    printf("string %s\n",b);
    printf("Integer %d\n",x);
    printf("Floating value %f\n",y);
    printf("Double precision float %lf\n",z);
    printf("boolean %d\n",e);
    printf("character as no. %d\n",a);
    printf("Character unsigned %d\n",f);
    return 0;
}