#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
struct Point{
    int x;
    int y;
};
int n;
Point A[N]; //array of structs (2D-points)
//true -> don't swap
//false -> swap
bool cmp(Point a , Point b)
{
    if(a.x == b.x)  // if their x's are equal then compare with y else then compare with x
    {
        return a.y < b.y;
    }
    return a.x < b.x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=0; i < n; i++)
    {
        cin>>A[i].x >> A[i].y;
    }
    sort(A , A+n , cmp);
    for(int i=0; i<n; i++)
    {
        cout<<A[i].x<<" "<<A[i].y<<endl;
    }
    return 0;
}
