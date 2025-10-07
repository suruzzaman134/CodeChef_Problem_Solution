// Problem Link : https://www.codechef.com/problems/SPCP4
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, x, k; cin >> n >> x >> k;
      int girl = n - x;

      int remaining_boy = x % k;
      int remaining_girl = girl % k;

      cout << max(remaining_girl, remaining_boy) - min(remaining_girl, remaining_boy) << "\n";
   }
   

   return 0;
}