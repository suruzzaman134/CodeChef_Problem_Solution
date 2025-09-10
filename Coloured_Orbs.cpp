// Problem Link : https://www.codechef.com/START203D/problems/COLORB
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int r, b; cin >> r >> b;

   int min_c = min(r, b);
   int rem = min_c - max(r, b);

   int ans = min_c * 5;

   if(r > b) ans += (r - b) * 1;
   else ans += (b - r) * 2;

   cout << ans << "\n";

   

   return 0;
}