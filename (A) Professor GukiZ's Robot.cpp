#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int z,x,c,v,q=0,w=0;
    cin>>z>>x>>c>>v;
    cout<<max(abs(z-c),abs(x-v));
}
