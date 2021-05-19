#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int sum,int arr[],int n)
{ 
    bool subset[n+1][sum+1];
	int i,j;
     for(i=0;i<n+1;i++)
	  subset[i][0] = true;
	 for(i=0;i<sum+1;i++)
	   subset[0][i] = false;
	
	 for(i=1;i<n+1;i++)
	 { 
	     for(j=1;j<sum+1;j++)
	    { 
	     
	     if(j>=arr[i-1])
	      
		    subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i-1]];
		   
	     else
		   
		    subset[i][j] = subset[i-1][j]; 
	 }
}
	 return subset[n][sum];
}
int main()
{ 
   int arr[100],i,n,sum;
   cin>>n>>sum;
   for(i=0;i<n;i++)
    cin>>arr[i];
   if(issubsetsum(sum,arr,n)==true)
    cout<<"Found a subset with given sum";
	else
	 cout<<"No subset with given sum";
	 return 0;
}
