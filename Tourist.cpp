#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, a, b; cin >> n >> a >> b;
      int l, r;
      int ans = INT_MAX;
      for(int i = 0; i < n; i++){
         int x, y; cin >> x >> y;

         l = abs(a - x);
         r = abs(b - y);
         ans = min(ans, l + r);
      }

      cout << ans << "\n";

   }
   

   return 0;
}