// Problem Link : https://www.codechef.com/problems/GAME_XI
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--)
   {
      int n, m;
      cin >> n >> m;
      vector<int> batsman(n), bowlers(m);
      for (int i = 0; i < n; i++)
         cin >> batsman[i];
      for (int i = 0; i < m; i++)
         cin >> bowlers[i];

      sort(batsman.begin(), batsman.end());
      sort(bowlers.begin(), bowlers.end());

      if (n < 4 || m < 4 || n + m < 11){
         cout << -1 << "\n";
         continue;
      }

      long long skill = accumulate(batsman.end() - 4, batsman.end(), 0LL);
      skill = accumulate(bowlers.end() - 4, bowlers.end(), skill);

      int k = 3;
      int bats_i = n - 4 - 1;
      int bowl_i = m - 4 - 1;

      if (bats_i < 0)
      {
         while (k > 0)
         {
            skill += bowlers[bowl_i--];
            k--;
         }
      }
      else if (bowl_i < 0)
      {
         while (k > 0)
         {
            skill += batsman[bats_i--];
            k--;
         }
      }
      else
      {
         while (k > 0 && bats_i >= 0 && bowl_i >= 0)
         {
            if (batsman[bats_i] > bowlers[bowl_i])
            {
               skill += batsman[bats_i--];
            }
            else
               skill += bowlers[bowl_i--];
            k--;
         }

         if (bats_i < 0)
         {
            while (k > 0)
            {
               skill += bowlers[bowl_i--];
               k--;
            }
         }
         else if (bowl_i < 0)
         {
            while (k > 0)
            {
               skill += batsman[bats_i--];
               k--;
            }
         }
      }

      cout << skill << "\n";
   }

   return 0;
}