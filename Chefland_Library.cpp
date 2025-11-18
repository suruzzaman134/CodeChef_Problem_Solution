// Problem Link : https://www.codechef.com/problems/BORROWBOOK
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
      map<int ,int> mp;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         mp[x] = max(mp[x], i+1);
      }

      int ans = 0;
      for(auto [x, y] : mp) ans += y;

      cout << ans << "\n";
   }
   

   return 0;
}