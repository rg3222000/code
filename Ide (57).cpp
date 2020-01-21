#include<iostream>
#include <climits> 
#include <cstring> 
using namespace std;
int min(int a, int b) 
{ 
return (a < b) ? a : b; 
} 
 
int minPartition(char* ch) 
{ 
 
	int n = strlen(ch); 
 
	int C[n]; 
	bool P[n][n]; 
 
	int i, j, k, L; 
 
	for (i = 0; i < n; i++) { 
		P[i][i] = true; 
	} 
 
	for (L = 2; L <= n; L++) { 
 
		for (i = 0; i < n - L + 1; i++) { 
			j = i + L - 1; 
 
			if (L == 2) 
				P[i][j] = (ch[i] == ch[j]); 
			else
				P[i][j] = (ch[i] == ch[j]) && P[i + 1][j - 1]; 
		} 
	} 
 
	for (i = 0; i < n; i++) { 
		if (P[0][i] == true) 
			C[i] = 0; 
		else { 
			C[i] = INT_MAX; 
			for (j = 0; j < i; j++) { 
				if (P[j + 1][i] == true && 1 + C[j] < C[i]) 
					C[i] = 1 + C[j]; 
			} 
		} 
	} 
 
	return C[n - 1]; 
} 
 
int main() 
{ 
int t;
cin>>t;;
while(t--)
{
string s;
cin>>s;
int l=s.length();
char ch[l];
for(int i=0;i<l;i++)
{
	ch[i]=s[i];
} 
 
	cout<<minPartition(ch)<<endl;
}
	return 0; 
} 