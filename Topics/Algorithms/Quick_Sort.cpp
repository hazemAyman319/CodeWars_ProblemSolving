#include <iostream>
using namespace std;
int divide(int arr[] , int start , int end)
{
    int pivot=arr[end]; //Any random element
    int index = start;
    for(int i=start ; i < end ; i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i] , arr[index]);
            index++;
        }
    }
    swap(arr[end],arr[index]);
    return index;
}
void Quick_sort(int arr[] , int start , int end)
{
    if(start < end)
    {
        int d_point = divide(arr , start , end);
        Quick_sort(arr , start , d_point-1);
        Quick_sort(arr , d_point+1 , end);
    }
}
int main()
{
    int size , i , arr[10];
    cout<<"Enter the number of elements : ";
    cin>>size;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Quick_sort(arr , 0 , (size-1));
    cout<<"After Sorting The elements are :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
