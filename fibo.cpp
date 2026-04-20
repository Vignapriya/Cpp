#include<iostream>
using namespace std;
int main()
{
   int t,a,b,n,out,e,d;
   cin>>t;
   for(int i=0;i<t;i++)
   {
     cin>>a>>b>>n;
     for(int j=0;j<t;j++)
     {
     out=b-a;
     if(out>0)
     {
        e=out;
     }
     else
     {
        d=1000000000+7+out;
     }
     }
   }
   cout<<e<<endl;
   cout<<d<<endl;

   return 0;
}
