#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t;
   cin>>n>>t;
   if(n==1&&t==10)
   {
       cout<<-1;
   }
   else
   {
       for(int i=0;i<n-1;i++)
       {
           for(int k=1;k<10;k++)
           {
               if(k%t==0)
            {
               cout<<k;
               break;
            }
            else if(t==10){cout<<1;break;}
           }
       }
       for(int i=1;i<10;i++)
       {
           if(i%t==0)
           {
               cout<<i;
               return 0;
           }
           else if(t==10)
           {
               cout<<0;break;
           }
       }
   }
}