#include <iostream>
using namespace std;

int main() {
	int i,j,t,n,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    int ai[n],bf[n];
	    for(i=0;i<n;i++)
	    cin>>ai[i];
	    for(i=0;i<n;i++)
	    cin>>bf[i];
	    
	    for(i=0;i<n;i++)
	    {
	        if(ai[d]+bf[0]>=ai[i]+bf[n-1])
	        {
	          cout<<i+1;
	          break;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
