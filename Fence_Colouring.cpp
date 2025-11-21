// Problem Link : https://www.codechef.com/problems/FENCECOL
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
      map<int, int> mp;
      for(int ele : v) mp[ele]++;
      pair<int, int> max_ele = {INT_MIN, -1};
      for(auto [x, y] : mp){
         if(max_ele.first < y) max_ele = {y, x};
      }
      int ans1 = n - max_ele.first + 1;

      int ans2 = 0;
      for(int ele : v){
         if(ele == 1) continue;
         ans2++;
      }

      cout << min(ans1, ans2) << "\n";
   }
   

   return 0;
}