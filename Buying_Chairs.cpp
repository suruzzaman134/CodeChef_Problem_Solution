// Problem Link : https://www.codechef.com/START211D/problems/CHRBUY
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int w, p, k; cin >> w >> p >> k;
      int ans = 0;
      if(w <= k) ans = (w * 2) + (k - w);
      else{
         ans = k * 2;
      }

      cout << ans << "\n";
   }
   

   return 0;
}