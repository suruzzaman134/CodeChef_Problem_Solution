// Problem Link : https://www.codechef.com/problems/SURPLUS
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b, c, d; cin >> a >> b >> c >> d;
      if(b + d > a + c) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}