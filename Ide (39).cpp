#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int t,n,k,i,j,a[1000];
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(k==1)
	    cout<<*min_element(a,a+n)<<"\n";
	    else if(k>=3)
	    cout<<*max_element(a,a+n)<<"\n";
	    else{
	        int* p;
	        p=max_element(a,a+n);
	        cout<<max(*min_element(a,p),*min_element(p,a+n))<<"\n";
	    }
	}
	return 0;
}

