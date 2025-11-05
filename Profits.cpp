#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, x; cin >> n >> x;
      int cost = 0, sell = 0;
      int ans = INT_MIN;
      int cnt = 1;
      for(int i = n; i >= 1; i--){
         cost = cnt * x;
         sell += i;
         // cout << cost << " " << sell << "\n";
         ans = max(ans, sell - cost);
         cnt++;
      }

      cout << max(ans, 0) << "\n";
   }
   

   return 0;
}