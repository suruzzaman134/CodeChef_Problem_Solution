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
      vector<pair<int, int>> v(n);
      for(int i = 0; i < n; i++){
         cin >> v[i].first >> v[i].second;
      }

      int ans = LLONG_MIN;
      int idx;
      for(int i = 0; i < n; i++){
         if(v[i].first / v[i].second > ans){
            ans = v[i].first / v[i].second;
            idx = i + 1;
         }
      }

      cout << idx << "\n";
   }
   

   return 0;
}