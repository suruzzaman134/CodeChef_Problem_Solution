// Problem Link : https://www.codechef.com/problems/VAL142
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   int max_possible = (1 << 7) - 1;
   while (t--)
   {
      int n; cin >> n;
      if(n >= max_possible) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}