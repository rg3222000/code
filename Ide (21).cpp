#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int lucky(int a,int b)
{
    int r=0,num=0,c=0;
    for(num=a;num<=b;num++)
    {
        int flag=1,n=num;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r!=4&&r!=7)
        {
            flag=0;
          break;
        }
    }
    if(flag==1)
    c++;
    }
    return c;
}
int main() {
int t,n=0,p1,p2,v1,v2,i,j,k;
cin>>t;
while(t--)
{
    int m=0;
    cin>>p1>>p2>>v1>>v2>>k;
    for(i=p1;i<=p2;i++)
    {
        for(j=v1;j<=v2;j++)
        {
            if(k==lucky(min(i,j),max(i,j)))
            {
               m++; 
            }
        }
    }
   double prob = (double)((double)m/((p2-p1+1)*(v2-v1+1)));
   
    prob=prob*pow(10,4);
    if(prob>=1000)
    cout<<"0"<<"."<<(int)prob<<"\n";
    else if(prob>=100)
    cout<<"0.0"<<(int)prob<<"\n";
    else if(prob>=10)
    cout<<"0.00"<<(int)prob<<"\n";
    else
    cout<<"0.000"<<(int)prob<<"\n";
    
}
	return 0;
}
