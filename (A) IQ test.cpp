#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,s=0;
    cin>>n;
    vector<int> d;
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        d.push_back(z);
        if(z%2==0)
        {
            a++;
        }
        else
            s++;
    }
    if(a>s)
    {
        for(int i=0;i<n;i++)
        {
            if(d[i]%2!=0)
            {
                cout<<i+1<<endl;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(d[i]%2==0)
            {
                cout<<i+1<<endl;
            }
        }
    }
}
