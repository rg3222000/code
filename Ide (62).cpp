#include <iostream>
#include <string>
using namespace std;

int main() {
	int i,j,t,n;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	   string s;
	   int flag=0;
	   getline(cin, s);
	   for(i=0;i<s.length();i++)
	   {
	     if(s[i]!='.')
	     {
	        int c=0;
	        for(j=i-1;j>=0;j--)
	        {
	            if(s[j]=='.')
	            {
	            c++;         
	            continue;
	            }
	            else
	            {
	              if(((int)s[i]-48+(int)s[j]-48)>=c-1)
	              {
	                  flag=2;
	                  cout<<"unsafe"<<"\n";
	                  break;
	              }
	              
	            }
	            
	        }
	        
	     }
	     if(flag==2)
	     break;
	     
	   }
	     if(flag!=2)
	     cout<<"safe"<<"\n";
	}
	return 0;
}
