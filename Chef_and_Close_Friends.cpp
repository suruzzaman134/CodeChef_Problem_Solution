// Problem Link : https://www.codechef.com/problems/P4HOME
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
      int x, y, z;
      cin >> x >> y >> z;
      if (z > y)
         cout << y * 2 << "\n";
      else
         cout << z * 2 << "\n";
   }

   return 0;
}