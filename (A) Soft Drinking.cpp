#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np,q,w,e,r;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    if(n>1000||k>1000||l>1000||c>1000||d>1000||p>1000||nl>1000||np>1000)
    {
        return 0;
    }
    if(n<1||k<1||l<1||c<1||d<1||p<1||nl<1||np<1)
    {
        return 0;
    }
    q=k*l;
    w=q/nl;
    e=c*d;
    r=p/np;
    int v=(min(min(w,e),r));
    cout<<v/n<<endl;

}
