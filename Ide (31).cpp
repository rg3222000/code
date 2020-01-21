#include<iostream>
using namespace std;
int count=0;
int partition(int a[],int l,int r)
{
     int p = a[l];
 
             int i=l+1;
             int j;
 
              for(j =l+1; j<=r;j++)
               {
                     if(a[j] < p)
                     {
                       int temp = a[i];
                       a[i] = a[j];
                       a[j] = temp;
                       i=i+1;
                      }
                }
                      int temp2 = a[l];
                      a[l] = a[i - 1];
                      a[i-1] = temp2;
		return i-1;
}
void quickSort(int a[],int l,int r)
{
    if(l<r)
    {
        
        int q=partition(a,l,r);
        (count)=(count)+(r-l);
        quickSort(a,l,q-1);     
        quickSort(a,q+1,r); 
		    
    }
}

int main()
{
	int t,n,a[1000],i=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		quickSort(a,0,n-1);
		cout<<count<<"\n";
		count=0;
	}
	return 0;
}
