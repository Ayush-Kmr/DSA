
// Max Number of cut we can obtain by cutting this rod

#include <bits/stdc++.h>
using namespace std;

int solverecursive(int n, int a, int b, int c)
{
   // Base case
   if (n == 0)
   {
      return 0;
   }
   if (n < 0)
   {
      return INT_MIN;
   }
   int first = solverecursive(n - a, a, b, c);
   int second = solverecursive(n - b, a, b, c);
   int third = solverecursive(n - c, a, b, c);

   return 1 + max(first, max(second, third));
}

// Top Down Approach
int solvememDp(int n, int a, int b, int c, vector<int> &dp)
{
   // Base case
   if (n == 0)
   {
      return 0;
   }
   if (n < 0)
   {
      return INT_MIN;
   }
   if (dp[n] != -1)
   {
      return dp[n];
   }
   int first = solvememDp(n - a, a, b, c, dp);
   int second = solvememDp(n - b, a, b, c, dp);
   int third = solvememDp(n - c, a, b, c, dp);

   return dp[n] = 1 + max(first, max(second, third));
}
int main()
{
   int rodsize = 17;
   int a = 10;
   int b = 11;
   int c = 3;
   int ans = solverecursive(rodsize, a, b, c);

   vector<int> dp(rodsize + 1, -1);
   // int ans = solvememDp(rodsize, a, b, c, dp);
   if (ans < 0)
   {
      ans = -1;
   }
   cout << "MAX cuts are " << ans << endl;
   return 0;
}