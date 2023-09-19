#include <stdio.h>

//bubble sort

void sort(int array[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
    }
}
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int ar[] ={3,1,4,5,8,6,7,9,2,0};
    int s = sizeof(ar)/sizeof(ar[0]);
    
    sort(ar,s);
    printArray(ar,s);
    return 0; 
}