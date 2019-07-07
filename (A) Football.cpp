#include<iostream>
using namespace std;
int main()
{
    bool p=false;
    int l=0;
    string a;
    cin>>a;
    if(a.length()<7)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<a.length();i++)
    {
        if(l>=6)
        {
            break;
        }
       if(a[i]==a[i+1]){
        l++;
       }
       else
       {
           l=0;
       }
    }
    if(l>=6)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
