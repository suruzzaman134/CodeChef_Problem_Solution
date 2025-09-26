// Problem Link : https://www.codechef.com/problems/BALLBOX
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      long long n, k; cin >> n >> k;

      long long ans = (-1 + sqrt(1 + (4 * (n * 2)))) / 2;

      if(k == 1 || ans >= k) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}