#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int j;
    int ar[2][3]={{1,2,3},
                  {4,5,6},};
    
    int rows = sizeof(ar)/sizeof(ar[0]);    // 24/12 = 2
    int columns =sizeof(ar[0])/sizeof(ar[0][0]);  // 12/4 = 3
    printf("\nNo. of Rows : %d",rows);
    printf("\nNo. of Columns : %d",columns);
    printf("\nArray :\n");
    for(i = 0; i<rows; i++) //controls rows
    {
        for(j=0; j<columns; j++) //controls columns
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}