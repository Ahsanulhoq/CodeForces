#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    bool k=false;
    vector<long> a;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long s;
        cin>>s;
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<t-2;i++)
    {

            if(a[i]+a[i+1]>a[i+2])
            {
                k=true;
                break;
            }

    }
    if(k==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
