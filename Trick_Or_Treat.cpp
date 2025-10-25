// Problem Link : https://www.codechef.com/problems/TREATS
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<long long> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      vector<long long> candy(n), chocolates(n);
      i_v(n, candy);
      i_v(n, chocolates);

      map<long long, long long> mp1, mp2;

      for(int ele: candy) mp1[ele % m]++;
      for(int ele: chocolates) mp2[ele % m]++;

      long long ans = 0;

      // for(auto [x, y]: mp1) cout << x << " " << y << " : ";
      // cout << "\n"; 
      // for(auto [x, y]: mp2) cout << x << " " << y << " : ";
      // cout << "\n"; 
      
      for(auto [x, y]: mp1){
         if(mp2.count(m-x)){
            ans += y * mp2[m-x];
         }
      }
      if(mp1.count(0) && mp2.count(0)) ans += mp1[0] * mp2[0];

      cout << ans << "\n";

      
   }
   

   return 0;
}