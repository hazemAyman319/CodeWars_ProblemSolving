#include <iostream>
using namespace std;
int val[N] , n;
bool F(int index , int value)
{
    if(index==5)
    {
        if(value == 23)
        {
            return 1;
        }
        return 0;
    }
    return ((index + 1 , value + val[index]) || (index+1 , value - val[index]) || (index + 1 , value * val[index]));
}
int main()
{
    while(cin>>val[0]>>val[1]>>val[2]>>val[3]>>val[4] , val[0] || val[1] || val[2] || val[3] || val[4])
    {
        sort(val , val+5);
        bool f = 0;
        do{
                if(1 , val[0])
                {
                    f=1;
                    break;
                }
        }while(next_permutation(val , val+5));
    }
    if(!f)
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        cout<<"Possible"<<endl;
    }
    return 0;
}
