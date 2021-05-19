#include<bits/stdc++.h>
//#define ll long long int
using namespace std;
int  count(int sum,int *arr,int n)
{ 
    int  subset[n+1][sum+1];
	int  i,j;
     for(i=0;i<n+1;i++)
	  subset[i][0] = 1;
	 for(i=1;i<sum+1;i++)
	   subset[0][i] = 0;
	
	 for(i=1;i<n+1;i++)
	 { 
	     for(j=1;j<sum+1;j++)
	    { 
	     
	           if (arr[i - 1] > j)
                subset[i][j] = subset[i - 1][j];
            else
            
                subset[i][j] = subset[i - 1][j] + subset[i][j - arr[i - 1]];
            
	 }
}
	 return subset[n][sum];
}
int main()
{ 
    int  i,n,sum;
   cin>>sum>>n;
    int arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   cout << count(sum,arr,n);
	 return 0;
}
