// Problem Link : https://www.codechef.com/problems/TWOCLOSE
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i <= n; i++) cin >> v[i];

      int delete_ele = v[n];
      for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            if(v[j] <= 2 * delete_ele && v[j] > delete_ele) delete_ele = v[j];
         }
      }
      int ans = 0;
      for(int i = 0; i <= n; i++){
         if(delete_ele == v[i]) delete_ele = -1;
         else ans += v[i];
      }

      cout << ans << "\n";
   }
   

   return 0;
}