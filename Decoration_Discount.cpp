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
      int ans = INT_MAX;
      for(int i = 0; i < n - 1; i++){
         int cost = v[i] + (v[i + 1] / 2);
         ans = min(cost, ans);
      }

      for(int i = 0; i < n - 2; i++){
         for(int j = i + 2; j < n; j++){
            ans = min(v[i] + v[j], ans);
         }
      }

      cout << ans << "\n";
   }
   

   return 0;
}