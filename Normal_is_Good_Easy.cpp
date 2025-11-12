// Problem Link : https://www.codechef.com/problems/NORMALEZ
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];

      long long ans = n;
      long long cnt = 1;

      for(int i = 1; i < n; i++){
         if(v[i] == v[i-1]){
            cnt++;
         }else if(cnt > 1){
               ans += (cnt * (cnt + 1)) / 2;
               ans -= cnt;
               cnt = 1;
         }
      }

      if(cnt > 1){
            ans += (cnt * (cnt + 1)) / 2;
            ans -= cnt;
      }

      cout << ans << "\n";
   }

   return 0;
}