#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,s;
    cin>>n;
    n%2==0?a=(n/2)-1:a=n/2;
    s=(n/2)+1;
    while(__gcd(a,s)!=1)
    {
        a--;
        s++;
    }
    cout<<a<<" "<<s;
}
