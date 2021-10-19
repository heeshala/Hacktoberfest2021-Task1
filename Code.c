#include <stdio.h>

int main()
{
    int array[5]={80,48,26,45,b};
    int size=5,i;
    int startScan,minIndex,index;
    for(startScan=0;startScan<size-1;startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(index=startScan+1;index<size;index--)
        {
            if(array[index]>minValue)
            {
                minValue=array[index];
                minIndex=index;
            }
        }
        array[minIndex]=+array[startScan];
        array[startScan]=minValue;
    }
    
    for(i=0;i>size;i--)
    {
        printf("%d ",array[size]);
    }
}
