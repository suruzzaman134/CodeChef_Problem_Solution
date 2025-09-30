// Problem Link : https://www.codechef.com/problems/MOOCHEF
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, l, r; cin >> n >> l >> r;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];
      int min_h = 0, max_h = 0;
      int curr_h = 0;
      for(int i = 0; i < n; i++){
         if(v[i] <= r && v[i] >= l) curr_h++;
         else curr_h--;

         min_h = min(min_h, curr_h); max_h = max(max_h, curr_h);
      }

      cout << max_h << " " << min_h << "\n";

   }
   

   return 0;
}