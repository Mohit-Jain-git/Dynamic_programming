#include<bits/stdc++.h>
using namespace std;
int count(int sum,int coin[],int n)
{ 
    int subset[n+1][sum+1];
	int i,j;
     for(i=1;i<n+1;i++)
	  subset[i][0] = 0;
	 for(i=0;i<sum+1;i++)
	   subset[0][i] = INT_MAX - 1 ;
	   for(i=1,j=1;j<sum+1;j++)
	   { 
	       if(j%coin[0]==0)
	        subset[i][j] = j/coin[0];
	        else
	         subset[i][j] = INT_MAX - 1;
	       
	   }
	
	 for(i=2;i<n+1;i++)
	 { 
	     for(j=1;j<sum+1;j++)
	    { 
	     
	           if (coin[i - 1] > j)
                subset[i][j] = subset[i - 1][j];
            else
            
                subset[i][j] = min(subset[i - 1][j] , subset[i][j - coin[i - 1]] + 1);
            
	 }
}
	 return subset[n][sum];
}
int main()
{ 
   int coin[100],i,n,sum;
   cin>>n>>sum;
   for(i=0;i<n;i++)
    cin>>coin[i];
   cout << count(sum,coin,n);
	 return 0;
}
