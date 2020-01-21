#include<iostream>
#include<algorithm>
using namespace std;
int Count=0;
int median(int a[],int l,int m, int r)
{
  int i,j;
  int arr[3] ={a[l],a[m],a[r]};
 int n = sizeof(arr)/sizeof(arr[0]); 
  
    sort(arr, arr+n); 
    
      int med = arr[1];
	if(med==a[l]) 
	return l;
	else if(med==a[m]) 
	return m;
	else 
	return r; 
}
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
        int mid=(l+r)/2;
        int p=median(a,l,mid,r);
         int temp = a[p];
         a[p] = a[l];
         a[l] = temp;
        int q=partition(a,l,r);
        (Count)=(Count)+(r-l);
        quickSort(a,l,q-1);     
        quickSort(a,q+1,r); 
		    
    }
}

int main()
{
	int t,n,i=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		quickSort(a,0,n-1);
		cout<<Count<<"\n";
		Count=0;
	}
	return 0;
}
