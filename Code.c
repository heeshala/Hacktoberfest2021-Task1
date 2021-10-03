#include <stdio.h>

int main()
{
    int array[5]={89,45,23,46,50};
    int size=5,i,j;
    int startScan,minIndex,minValue;
    for(startScan=0;startScan<size-1;startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(i=startScan+1;i<size;i++)
        {
            if(array[i]<minValue)
            {
                minValue=array[i];
                minIndex=i;
            }
        }
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
    
    for(j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }
}
