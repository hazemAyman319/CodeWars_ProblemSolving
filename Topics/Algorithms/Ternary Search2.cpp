#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{ //search for the max - min number
    const int n = 10;
    int arr[n]={5,6,7,8,9,4,3,2,1,0};
    int start = 0 , end = n-1;
    while(start - end >= 3)
    {
        m1 = start + (end-start)/3;
        m2 = end - (end-start)/3;
        if(arr[m1] < arr[m2])
        {
            start = m1;
        }
        else
        {
            end = m2;
        }
    }
    int ans = arr[start] , ansIdx = start; //this part of code is for the last 3 elements
    for(int i=start;i<=end;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
            ansIdx=i;
        }
    }
    cout<<ansIdx;
    return 0;
}
