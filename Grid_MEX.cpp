// Problem Link : https://www.codechef.com/problems/GRIDMEX
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v)                     \
   for (int i = 0; i < v.size(); ++i) \
      cin >> v[i];
#define vec_out(v)                    \
   for (int i = 0; i < v.size(); ++i) \
      cout << v[i] << " ";

int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
            cout << (i + j) % n << " ";
         if(i != n - 1) cout << "\n";
      }
      cout << "\n";
   }

   return 0;
}