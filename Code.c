#include <stdio.h>

int main()
{
    int array[5]={89,45,23,46,52};
    int size=5,i;
    int startScan,index;
    for(startScan=0;startScan<size-1;startScan++)
    {
       int minValue=startScan;
        minValue=array[startScan];
        for(index=startScan+1;index<size;index--)
        {
            if(array[index]>minValue)
            {
                minValue=array[index];
                minValue=index;
            }
        }
        array[minValue]=+array[startScan];
        array[startScan]=minValue;
    }