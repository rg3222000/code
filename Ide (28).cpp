#include <bits/stdc++.h> 
#include<tuple>
using namespace std; 
bool maximise(const tuple<char, int, int>& a, 
              const tuple<char, int, int>& b) 
{ 
    return (get<2>(a)/get<1>(a) >= get<2>(b)/get<1>(b)); 
} 
int main()
{
	int t,n,wi,w,i;
	char c;
	double p;
	vector <tuple<char,int,double>> v;
	cin>>t;
	while(t--)
	{
	    int s=0,k=0;
	    double pr=0;
		cin>>w;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>c>>wi>>p;
			v.push_back(make_tuple(c,wi,p));
		}
		sort(v.begin(),v.end(),maximise);
		while(s!=w||k!=n)
		{
		    if(get<1>(v[k])>=w)
		    {
		        s=w;
		        pr=pr+(double)((double)w/get<1>(v[k]))*get<2>(v[k]);
		        break;
		    }
		    else if((w-s)<get<1>(v[k]))
		    {
		        pr=pr+(double)((double)(w-s)/get<1>(v[k]))*get<2>(v[k]);
		        s=w;
		        break;
		    }
		    else
		    {
		        s=s+get<1>(v[k]);
		        pr=pr+get<2>(v[k]);
		    }
		    k++;
		}
		cout<<s<<" "<<pr<<"\n";
		v.clear();
	}
	return 0;
}