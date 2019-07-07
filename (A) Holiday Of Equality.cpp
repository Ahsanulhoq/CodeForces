#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
    }
    if(n==1)
    {
        cout<<"0";
        return 0;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        int u;
        u=a[n-1]-a[i];
        s+=u;
    }
    cout<<s;
}

