#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,s=0,j=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<7;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    while(1)
    {
        if(j>=7)
        {
            j=0;
        }
        s+=a[j];
        if(s>=n)
        {
            break;
        }
        j++;
    }
    cout<<j+1;
}
