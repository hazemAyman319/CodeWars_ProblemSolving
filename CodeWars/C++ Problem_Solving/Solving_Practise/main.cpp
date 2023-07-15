#include <iostream>
using namespace std;
void heapify(int arr[] , int n , int i)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int max = i;
    if(l < n && arr[l] > arr[max])
    {
        max = l;
    }
    if(r < n && arr[r] > arr[max])
    {
        max=r;
    }
    if(max!=i)
    {
        swap(arr[i] , arr[max]);
        heapify(arr , n ,max);
    }
}
int main()
{

    return 0;
}
