#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t,i,j,n;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    char st[n]; 
    for( i = 0;i<n;i++)
    scanf(" %c",&st[i]);
    char st1[n];
    int med;
    int c = 1;
    if(n % 2 == 0)
    {
      med = (n/2) -1; 
      st1[med] = st[0];
      for(i = 1;i<n;i++)
      {
        if(i % 2 == 0)
        {
        st1[med - c] = st[i];
        c++;
         }
        else
        st1[med + c] = st[i];
      }
  }
      else
      {
      med = (n/2); 
      st1[med] = st[0];
      for(i = 1;i<n;i++)
      {
        if(i % 2 == 0)
        {
        st1[med + c] = st[i];
        c++;
         }
        else
        st1[med - c] = st[i];
      }
       }
          for(i = 0;i<n;i++)
          printf("%c",st1[i]);
          printf("\n");
        }
         return 0;
       }
