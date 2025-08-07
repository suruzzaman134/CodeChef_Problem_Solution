#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, a, b, c, d; cin >> n >> a >> b >> c >> d;

      int count0 = 0;
      int ans = 0;
      for(int i = 0; i <= n; i++){
         int count1 = n - count0;
         int total = count0 * a + count1 * b;
         total += count0 * count1 * max(c, d);

         ans = max(ans, total);
         count0++; 
      }

      cout << ans << "\n";
   }
   

   return 0;
}