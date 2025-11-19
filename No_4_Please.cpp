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
      map<int, int> mp;
      vi v(n);
      int ans = 0;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         v[i] = x;
         mp[x]++;
      }

      ans += min(mp[1], mp[3]);
      ans += max(0LL, mp[2] - 1);

      cout << ans << "\n";
   }
   

   return 0;
}