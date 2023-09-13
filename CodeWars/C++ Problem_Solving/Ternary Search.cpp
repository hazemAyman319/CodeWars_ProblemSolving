#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{ //search for the max - min number
    const int n = 10;
    int arr[n]={5,6,7,8,9,4,3,2,1,0};
    int start = 0 , end = n-1 , m1 , m2;
    while(start <= end)
    {
        m1 = start + (end-start)/3;
        m2 = end - (end-start)/3;
        if(arr[m1] < arr[m2])
        {
            start = m1 + 1;
        }
        else
        {
            end = m2 - 1;
        }
    }
    cout<<"index "<<m1<<" "<<": "<<arr[m1];
    return 0;
}
