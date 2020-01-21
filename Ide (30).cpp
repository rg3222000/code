#include<iostream>
using namespace std;
int count=0;
int partition(int a[],int l,int r)
{
    int j,temp,i=l+1;

    for(j=l+1;j<r;j++)
    {
      
        if(a[j]<=a[l])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;
        }
    }
    
    temp=a[i-1];
    a[i-1]=a[l];
    a[l]=temp;
    return i-1;
}
void quickSort(int a[],int l,int r)
{
    if(l<r-1)
    {
        (count)=(count)+(r-l-1);
        int q=partition(a,l,r); 
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
		quickSort(a,0,n);
		cout<<count+1<<"\n";
		count=0;
	}
	return 0;
}
