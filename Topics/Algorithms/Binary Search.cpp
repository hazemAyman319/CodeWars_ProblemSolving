#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    const int n = 10 , k=4;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int start = 0 , end = n-1 , mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] == k)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if(arr[mid]>k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}
