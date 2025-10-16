// Problem Link : https://www.codechef.com/START208D/problems/SBTG
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
      int n, x, k; cin >> n >> x >> k;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());

      x += (k * 100);

      for(int i = n - 1; k > 0; i--){
         v[i] = 0;
         k--;
      }

      sort(v.begin(), v.end());

      int cnt = 0;
      for(int ch: v){
         if(ch > x) cnt++;
      }

      cout << cnt + 1 << "\n";
   }

   return 0;
}