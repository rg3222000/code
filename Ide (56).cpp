#include <iostream>
using namespace std;
int arr[1000][1000];
int rightcount(int arr[1000][1000],int i,int j)
{
 int k=j,c=0;
 while(arr[i][k]!=0)
 {
     c++;
     k++;
 }
 int p=j-1;
 while(arr[i][p]!=0)
 {
     c++;
     p--;
 }
 return c;
}
int downcount(int arr[1000][1000],int i,int j)
{
    int k=i,c=0;
    while(arr[k][j]!=0)
    {
        c++;
        k++;
    }
    k=i-1;
     while(arr[k][j]!=0)
    {
        c++;
        k--;
    }
    return c;
}
int leftdiag(int arr[1000][1000],int i,int j)
{
    int k=i,p=j,c=0;
    while(arr[k][p]!=0)
    {
        c++;
        k++;
        p--;
    }
    k=i-1;
    p=j+1;
    while(arr[k][p]!=0)
    {
        c++;
        k--;
        p++;
    }
    return c;
}
int rightdiag(int arr[1000][1000],int i,int j)
{
    int k=i,p=j,c=0;
    while(arr[k][p]!=0)
    {
        k++;
        p++;
        c++;
    }
    k=i-1;
    p=j-1;
    while(arr[k][p]!=0)
    {
        k--;
        p--;
        c++;
    }
    
    return c;
}
int main() {
   int i,j,t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
        arr[n+2][n+2]={0};
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               cin>>arr[i][j];
           }
       }
       for(i=0;i<=n+1;i++)
       {
           arr[i][n+1]=0;
           arr[n+1][i]=0;
       }
       for(i=0;i<=n;i++)
       {
         for(j=0;j<=n;j++)
         {
             if(i==0||j==0)
             arr[i][j]=0;
             else if(arr[i][j]==0)
             arr[i][j]=0;
             else
             {
                 arr[i][j]=max(rightcount(arr,i,j),max(downcount(arr,i,j),max(leftdiag(arr,i,j),rightdiag(arr,i,j))));
             }
         }
       }
       for(i=1;i<=n;i++)
       {
       for(j=1;j<=n;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
       }
       cout<<"\n";
   }
	return 0;
}
