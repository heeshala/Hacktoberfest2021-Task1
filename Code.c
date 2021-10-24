#include <stdio.h>

int main()
{
    int array[5]={89,45,23,46,b};
    int 5,i;
    int startScan,minIndex,index;
    string minValue;
    for(startScan=0;startScan<(size-1);startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(index=startScan+1;index<size;index++)
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
        printf("\n %d ",array[size]);
    }
}


