#include <stdio.h>

int main()
{
    int x = 6;   // 6  = 00000110
    int y = 12;  // 12 = 00001100
    int z = 0;   // 0  = 00000000

    z = x & y;   // 4  = 00000100
    printf("\nAND : %d",z);

    z = x | y;   // 14 = 00001110
    printf("\nOR : %d",z);

    z = x ^ y;   // 10 = 00001010
    printf("\nXOR : %d",z);

    z = x << 2;  // 24 = 00011000
    printf("\nSHIFT LEFT : %d",z);

    z = y >> 2;  // 3  = 00000011
    printf("\nSHIFT RIGHT : %d",z);
   
    return 0;
}