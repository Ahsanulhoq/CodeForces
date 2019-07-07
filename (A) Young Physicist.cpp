#include<iostream>
using namespace std;
int main()
{
    int n,a=0,s=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int q,w,e;
        cin>>q>>w>>e;
        a+=q;
        s+=w;
        d+=e;
    }
    if(a==0&&s==0&&d==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
