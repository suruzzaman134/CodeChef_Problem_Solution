// Problem Link : https://www.codechef.com/START208D/problems/GUCD
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());

      int ans = v[n-1];
      while (ans >= v[n-1] || ans == v[0])
      {
         ans--;
      }
      

      cout << ans << "\n";
   }
   

   return 0;
}