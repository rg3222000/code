#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,i,j;
	string x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int lx=x.length();
	    int c=0;
	    for(i=0;i<lx;i++)
	    {
	        if(x[i]==y[i+1] && x[i+1]==y[i] && x[i]!=x[i+1])
	        {
	            c++;
	            i++;
	        }
	        else if(x[i]!=y[i])
	        {
	            c++;
	        }
	 
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
