#include<iostream>
using namespace std;
int main()
{
  int t,i,j,n;
  cin>>t;
  while(t--)
  {
   cin>>n;
   int a[n];
   for(i = 0;i<n-1;i++)
   cin>>a[i];
   int c = 0;
   int a1[n];
   a1[0] = n;
       for(i = n -2;i>=0;)
   {
     c++;
     a1[c] = a[i];
     i = a[i] - 2;
   }
      for(i = c;i>=0;i--)
      cout<<a1[i]<<"\n";
     }
        return 0;
    }
