#include <stdio.h>

using namespace std;
int main()
{
    int array[5]={89,45,23,46,b};
    int size=5,i;
    int startScan,minIndex,index;
    int array[4]={89,45,23,46};
    int size=4,i;
    int startScan,minIndex,index,minValue;
    for(startScan=0;startScan<size-1;startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(index=startScan+1;index<size;index--)
        for(index=startScan+1;index<size;index++)
        {
            if(array[index]>minValue)
            {
                minValue=array[index];
                minIndex=index;
            }
        }
        array[minIndex]=+array[startScan];
        array[minIndex]+=array[startScan];
        array[startScan]=minValue;
    }
    
    for(i=0;i>size;i--)

    for(i=0;i<size;i++)
    {
        printf("%d ",array[size]);
        printf("%d ",array[i]);
    }
}
