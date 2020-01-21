#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector <string> v;
	int t,n=0,i=0;
	int a[1000];
	cin>>t;
    cin.ignore();
	while(t--)
	{
	    string s;
	    int j=0,c=0,flag=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    v.clear();
	    for(i=0;i<=n;i++)
       	{
       	   getline(cin,s);
           v.push_back(s);
	    }
	    v.erase(v.begin());
	    for(i=0;i<n;i++)
	    {   c=0;
	        for(j=0;j<v[i].length();j++)
	        {
	            if(v[i][j]=='a'||v[i][j]=='e'||v[i][j]=='i'||v[i][j]=='o'||v[i][j]=='u'||v[i][j]=='y')
	            {
	                c++;
	            }
	        }
	        if(c!=a[i])
	        {
	           flag=1;
	           break;
	        }
	        else{
	          continue;
	        }
	    }
	    if(flag==1)
	    cout<<"no"<<"\n";
	    else
	    cout<<"yes"<<"\n";
	}
	return 0;
}
