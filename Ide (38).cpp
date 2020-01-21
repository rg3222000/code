#include <iostream>
using namespace std;

int main() {
   int a[100],t,n,k,i,j;
   cin>>t;
   while(t--)
   {
       int max=0,s=0,m=0,ind=0,b[1000]={0},q=0;
       double p=0;
       cin>>n;
       cin>>k;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(j=0;j<n;j++)
       {
       for(i=j;i<n;i++)
       {
           m++;
           s=s+a[i];
           p=(double)((double)(s)/(m));
           b[ind++]=a[i];
           if(p<k)
           {
                q=m;
           }
          
       }
       if(q==0)
       {
         ind=0;
       }
       if(q>0)
       {
           break;
       }
       m=0;s=0;
       }
       cout<<q<<"\n";
       for(i=0;i<q;i++)
       cout<<b[i]<<" ";
       cout<<"\n";
   }
	return 0;
}
