#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y,int n,int m)
{ 
     int i,j;
     int t[n+1][m+1];
     for(i=0;i<n+1;i++)
      t[i][0] = 0;
      for(i=1;i<m+1;i++)
       t[0][i]=0;
       for(i=1;i<n+1;i++)
	   { 
	      for(j=1;j<m+1;j++)
	        { 
	           if(x[i-1]==y[j-1])
	             t[i][j] = 1 + t[i-1][j-1];
	            else
				 t[i][j] =  max(t[i][j-1],t[i-1][j]);
			}
		 }  
	return t[n][m];	 
}
int main()
{ 
   string x,y;
   int n,m;
   cin>>x>>y;
   n = x.size();
   m = y.size();
   int c = (m+n) - LCS(x,y,n,m);
   cout<<c;
   return 0;
}
