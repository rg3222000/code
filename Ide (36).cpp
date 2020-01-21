#include <iostream>
using namespace std;

int main() {
   int a[100],t,n,k,i;
   cin>>t;
   while(t--)
   {
       int max=0,s=0,m=0,ind=0,b[1000]={0};
       double p=0;
       cin>>n;
       cin>>k;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           m++;
           s=s+a[i];
           p=(double)((double)(s)/(m));
           if(p<0)
           {
               m=0;
               p=0;
               s=0;
               ind=0;
           }
           if(max<p)
           {
               max=p;
               b[ind++]=a[i];
               
           }
          
       }
   }
	return 0;
}
