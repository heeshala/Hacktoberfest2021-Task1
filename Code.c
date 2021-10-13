#include <stdio.h>

int main()
{
    int array[]={89,45,23,46};
    int size=4;
   int startScan,minIndex,index,minValue;
    for(startScan=0;startScan<size-1;startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(index=startScan+1;index<size;index++)
        {
            if(array[index]<minValue)
            {
                minValue=array[index];
                minIndex=index;
            }
        }
       array[minIndex]=+array[startScan];
       array[startScan]=minValue;
    }


    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}
