#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,k=0,p;
    cin>>t;
    vector<int> a;
    for(int i=0;i<t;i++)
    {
        int j;
        cin>>j;
        a.push_back(j);
    }
    while(1)
    {
        p=0;
       for(int i=0;i<t-1;i++)
    {
        if(a[i]>a[i+1])
        {
         a[i]=a[i]-a[i+1];
         i--;
        }
        else if(a[i]<a[i+1])
        {
            a[i+1]=a[i+1]-a[i];
            i--;
        }
        else if(a[0]==a[t-1])
        {
            p=1;
        }
    }
    if(p==1)
    {
        break;
    }
    }

    for(int i=0;i<t;i++)
    {
        k+=a[i];
    }
    cout<<k;
}
