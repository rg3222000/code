#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int t,n,i,j,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<tuple<int,string,int,int>> v;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        cin>>a>>b;
	        v.push_back(make_tuple(0,s,a,b));
	    }
	        for(i=0,j=i+1;j<n;j++)
	        {
	            if(get<2>(v[j])>=get<3>(v[i]))
	            {
	                get<0>(v[i])=1;
	                get<0>(v[j])=1;
	                i=j;
	            }
	        }
	        for(i=0;i<n;i++)
	        {
	            if(get<0>(v[i])==1)
	            cout<<get<1>(v[i])<<" "<<get<2>(v[i])<<" "<<get<3>(v[i])<<"\n";
	        }
	}
	return 0;
}
