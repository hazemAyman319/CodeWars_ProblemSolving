#include <iostream>
using namespace std;
void merge(int *leftArray , int *RightArray , int *array)
{
    int leftSize = 8/2;
    int rightSize = 8 - leftSize;
    int i=0 , l=0 , r=0;

    while(l < leftSize && r < rightSize)
    {
        if(leftArray[l] < RightArray[r])
        {
            array[i]=leftArray[l];
            i++;
            l++;
        }
        else
        {
            array[i]=RightArray[r];
            i++;
            r++;
        }
    }
    while(l < leftSize){
        array[i]=leftArray[l];
        i++;
        l++;
    }
    while(r < rightSize){
        array[i]=RightArray[r];
        i++;
        r++;
    }
}
void mergeSort(int array[] , int size)
{
    if(size<=1)
    {
        return;
    }
    int middle = size/2;
    int leftArray[middle];
    int RightArray[size-middle];

    for(int i=0 , j=0; i<size;)
    {
        if(i<middle)
        {
            leftArray[i]=array[i];
            i++;
        }
        else
        {
            RightArray[j]=array[i];
            j++;
        }
    }
    mergeSort(leftArray , size);
    mergeSort(RightArray , size);
    merge(leftArray , RightArray , array);
}
int main()
{
    int array[]={8,2,5,3,4,7,6,1};
    int size = 8;
    mergeSort(array , size);
    for(int i=0;i<8;i++)
    {
        cout<<array[i];
    }
    return 0;
}
