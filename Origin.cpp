// Problem Link : https://www.codechef.com/problems/OG
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      long long n; cin >> n;

      if(n <= 9){
         cout << n * ((n + 1) / 2) << "\n";
      }
      else {
         int remaining = n - 9;
         cout << 45 + (remaining * ((remaining + 1) / 2)) << "\n";
      }
   }
   

   return 0;
}