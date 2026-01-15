// Problem Link : https://www.codechef.com/problems/GEMBUND
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
      int r, g, b; cin >> r >> g >> b;
      int min_g = min({r, g, b});
      r -= min_g;
      g -= min_g;
      b -= min_g;
      
      
      int ans = (min_g * 10) + (r * 3) + (g * 3) + (b * 3);
      cout << ans << "\n";
   }
   

   return 0;
}