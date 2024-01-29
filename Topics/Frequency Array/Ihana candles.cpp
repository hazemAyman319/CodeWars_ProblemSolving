#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	set<int> foo;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		int g = s.find('G');
		int k = s.find('S');
		if (g > k) {
			cout << -1 << endl;
			return 0;
		}
		foo.insert(k - g);
	}

	cout << foo.size() << endl;

	return 0;
}

/*
int row , column , res=10000000; cin>>row>>column;
    int freq[row]={0};
    while(row--)
    {
        string words;cin>>words;
        bool start=false;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]=='G')
            {
                start=true;
            }
            if(words[i]=='*' && start==true)
            {
                freq[row-1]++;
            }
            if(words[i]=='S')
            {
                start=false;
            }
        }
    }
    for(int i=1;i<row;i++)
    {
        res=min(freq[i] , freq[i-1]);
        cout<<res<<endl;
    }
*/
