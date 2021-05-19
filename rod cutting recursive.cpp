#include <iostream>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int knapsack(int length[], int price[], int n)
{
  if (n == 0)
    return 0;
  else if (length[n - 1] <= n)
    return max(price[n - 1] + knapsack(length, price,(n - length[n - 1])), knapsack(length, price, n - 1));
  else if (length[n - 1] > n)
    return knapsack(length, price, n - 1);
}
int main()
{
  int length[100], price[100], n, i = 0;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> length[i];
  for (i = 0; i < n; i++)
    cin >> price[i];
  int c = knapsack(length, price, n);
  cout<<c;
  return 0;
}
