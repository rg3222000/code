#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    int i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
     if(n==1)
        {
        if(a[0]!=b[0])
        cout<<"1";
        else
        cout<<"0";
        }
       
       else{
            int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        continue;
        
        else if(a[i]==b[i+1]&&b[i]==a[i+1]&&abs(a[i+1]-a[i])==1&&i<n-1)
        {
        c++;
        i++;
        }
        
        else
        {
            c++;
        }
        
       cout<<c<<" ";
    }
       }
	return 0;
}
