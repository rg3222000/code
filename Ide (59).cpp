#include <iostream>
using namespace std;

int main() {
	int t,i=0,j=0,n;
	cin>>n;
	int a[n],b[n];
     for(i=0;i<n;i++)
	{
	 cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
	{
	    double s=(double)(((double)a[i])/b[i]);
	    if(s>=1.6 && s<=1.7)
	    j++;
	}
	cout<<j;
	return 0;
}
