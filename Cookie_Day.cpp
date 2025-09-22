// Problem Link : https://www.codechef.com/problems/ADVITIYA3?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];

      int ans = INT_MAX;

      for(int i = 0; i < n; i++){
         if(v[i] >= k) ans = min(ans, v[i] % k);
      }

      if(ans == INT_MAX) cout << -1 << "\n";
      else cout << ans << "\n";
   }
   

   return 0;
}