#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    double x[10000] , y[10000];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    double start=-20000 , end=20000 , m1 , m2;
    double EPS = 0.0000001;
    while(end-start>EPS)
    {
        m1 = start + (end-start)/3.0;
        m2 = end - (end-start)/3.0;
        double DistM1 = -1 , DistM2 = -1;
        for(int i=0;i<n;i++)
        {
            DistM1 = max(DistM1 , hypot(m1 - x[i] , y[i])); //to measure distance of point to the points on the plane
            DistM2 = max(DistM2 , hypot(m2 - x[i] , y[i]));
        }
        if(DistM1 > DistM2)
        {
            start = m1;
        }
        else
        {
            end= m2;
        }
        cout<<fixed<<setprecision(6)<<(start+end)/2;
    }
    return 0;
}
