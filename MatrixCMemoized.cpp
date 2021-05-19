#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int solve(int a[], int i, int j)
{
  if (i >= j)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];
  dp[i][j] = INT_MAX;
  for (int k = i; k < j; k++)
  {
    dp[i][j] = min(dp[i][j], solve(a, i, k) + solve(a, k + 1, j) + a[i - 1] * a[k] * a[j]);
  }
  return dp[i][j];
}
int main()
{
  int n;
  memset(dp, -1, sizeof(dp));
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int c = solve(a, 1, n - 1);
  cout << c;
  return 0;
}