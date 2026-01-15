// Problem Link : https://www.codechef.com/problems/SPMISS
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, c; cin >> n >> c;
      vi coins(n);
      vec_in(coins);
      string s; cin >> s;

      int zero_pay = 0, one_pay = 0;
      for(int i = 0; i < n; i++){
         if(s[i] == '1') one_pay += coins[i];
         else zero_pay += coins[i];
      }
      int ans = zero_pay;
      if(zero_pay >= c) ans = max(ans, (zero_pay + one_pay) - c);

      if(zero_pay) cout << ans << "\n";
      else cout << 0 << "\n";

   }
   

   return 0;
}