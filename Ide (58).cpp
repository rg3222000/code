#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int i,j,t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
if(n%2==0)
cout<<a[(n/2)-1]<<"\n";
else
cout<<a[n/2]<<"\n";
}
	return 0;
}
