// Problem Link : https://www.codechef.com/problems/ADJSUM
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
      int n; cin >> n;
      vi v(n);
      vec_in(v);

      vi dp(n);
      dp[0] = v[0];
      for(int i = 1; i < n; i++){
         int make_equal = abs(v[i]-v[i-1]);
         if(i - 2 >= 0) make_equal += v[i-2];
         if(i - 3 >= 0) make_equal += dp[i-3];

         int make_zero = v[i];
         if(i - 1 >= 0) make_zero += dp[i-1];

         dp[i] = min(make_zero, make_equal);
      }

      cout << dp[n-1] << "\n";

   }
   

   return 0;
}