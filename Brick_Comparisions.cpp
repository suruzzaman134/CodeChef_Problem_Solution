// Problem Link : https://www.codechef.com/problems/STICKCOMP
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
      int ans = 1;
      int cur_brick = v[0];
      for(int i = 1; i < n; i++){
         if(v[i] > cur_brick){
             ans = i+1;
             cur_brick = v[i];
         }
      }

      cout << ans << "\n";
   }
   

   return 0;
}