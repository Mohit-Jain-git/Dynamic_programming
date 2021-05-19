#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int length[],int price[],int n)
{ 
    int i,j;
    int t[n+1][n+1];
    for(i=0;i<n+1;i++)
    {
    for(j=0;j<n+1;j++)
    { 
        if(i==0 || j==0)
        t[i][j]=0;
        else if(length[i-1]<=j)
		t[i][j] = max(price[i-1] + t[i][j-length[i-1]],t[i-1][j]);
		else
		t[i][j] = t[i-1][j]; 
	}
 }
 return t[n][n];
}
int main()
{ 
  int i,n,price[100],length[100];
  cin>>n;
  for(i=0;i<n;i++)
    cin>>length[i];
  for(i=0;i<n;i++)
    cin>>price[i];
  int c = knapsack(length,price,n);
  cout<<c;
  return 0; 	  
}
