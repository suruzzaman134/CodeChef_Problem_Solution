#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int l, r; cin >> l >> r;

      if(l <= r / 2 || l == 1) cout << -1 << "\n";
      else cout << r << "\n";
   }
   

   return 0;
}