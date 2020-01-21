#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	int t,i,j,n=0,m=0;
	vector <int> p;
	vector <int> q;
	cin>>t;
	while(t--)
	{
	    int s=0,k=0;
	  cin>>n;
	  for(i=0;i<n;i++)
	  {
	      cin>>j;
	      p.push_back(j);
	      q.push_back(j);
	  }
	  sort(p.begin(),p.end());
	  for(i=0;i<n;i++)
	  {
	      vector <int>::iterator it=find(q.begin(),q.end(),p[i]);
	      int index=distance(q.begin(),it);
	       cout<<index+1<<"\n";
	      *it=0;
	  }
	  k=n;
	  for(m=0;m<n;m++)
	  {
	      s=s+p[m]*k;
	      k--;
	  }
	  cout<<(double)((double)s/n)<<"\n";
	}
	return 0;
}
