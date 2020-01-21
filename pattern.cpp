#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int t,i,j,k;
  scanf("%d",&t);
  while(t--)
  {
     int n,l;
     int c,c1;
     scanf("%d",&n);
     int n1[n];
     for(i = 0;i<n;i++)
     scanf("%d",&n1[i]);
     char st[n][100];
     for(i = 0;i<n;i++)
     scanf(" %[^\n]s",st[i]);
     char vow[6] = {'a','e','i','o','u','y'};
     c1 = 0;
     for( i = 0;i<n;i++)
     {
       c = 0;
       l = strlen(st[i]);
       for(j = 0;j<l;j++)
       {
         for( k = 0;k<6;k++)
         {
           if(st[i][j] == vow[k])
            c++;
          } 
        }
            if(c != n1[i])
            {
              c1 = 1;
              
        }
    }
          if( c1 == 0)
          printf("YES\n");
          else
          printf("NO\n");
         }
       return 0;
       }

