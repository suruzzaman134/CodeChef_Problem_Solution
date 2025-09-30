// Problem Link : https://www.codechef.com/problems/SMARTER
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int l, v1, v2; cin >> l >> v1 >> v2;

      int v1_second = l <= v1 ? 1 : ceil((float)l / v1);
      int v2_second = l <= v2 ? 1 : ceil((float)l / v2);

      if(v1_second <= v2_second) cout << -1 << "\n";
      else cout << v1_second - (v2_second + 1) << "\n";
   }
   

   return 0;
}