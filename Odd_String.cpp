// Problem Link : https://www.codechef.com/problems/LMP2
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
      string s; cin >> s;
      map<char, int> mp;
      for(auto ele: s) mp[ele]++;
      bool flag = true;
      for(auto [x, y] : mp){
         if(y > 2){
            flag = false;
            break;
         }
      }
      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}