// Problem Link : https://www.codechef.com/problems/COUNTSUB343
#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> p(n);
      for (int i = 0; i < n; i++)
         cin >> p[i];

      map<int, int> ans;

      for (int i = 0; i < n; i++)
      {
         int s = 0;
         for (int j = i; j < n; j++)
         {
            s += p[j];
            if(s > n) break;
            ans[s]++;
         }
      }

      for (int i = 1; i <= n; i++)
      {
         cout << ans[i] << " ";
      }
      cout << "\n";
   }

   return 0;
}
