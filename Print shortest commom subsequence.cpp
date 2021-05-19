#include<bits/stdc++.h>
using namespace std;
string  SCS(string x,string y,int n,int m)
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
	int index =  t[n][m];
	string s;	 
	i=n;
	j=m;
	while(i>0 && j>0)
	{ 
	   if(x[i-1]==y[j-1])
	    { 
	       s.push_back(x[i-1]);
	       i--;
	       j--;
		}
		else
		{ 
		    if(t[i-1][j]>t[i][j-1])
		    {
		    	s.push_back(x[i-1]);
		    	 i--;
			}
			else
			{
				s.push_back(y[j-1]);
			    j--;
		   }
		}
    }
		while(i>0)
		{ 
		    s.push_back(x[i-1]);
		    i--;
		}
		while(j>0)
		{ 
		   s.push_back(y[j-1]);
		   j--;
		}
	
	 reverse(s.begin(),s.end());
	return s;
}
int main()
{ 
   string x,y;
   int n,m;
   cin>>x>>y;
   n = x.size();
   m = y.size();
   string  c = SCS(x,y,n,m);
   cout<<c;
   return 0;
}
