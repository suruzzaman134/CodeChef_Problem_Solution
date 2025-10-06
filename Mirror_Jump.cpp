// Problem Link : https://www.codechef.com/problems/MIRJMP
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      
      cout << min(1 + (n - (n - k + 1)), n - k) << "\n";
   }
   

   return 0;
}