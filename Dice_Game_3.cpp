// Problem Link : https://www.codechef.com/problems/DICEGAME3
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      if(n % 2 == 0) cout << n / 2 + (((n / 2) * 6) * 2) << "\n";
      else cout << (n / 2) + (((n / 2) * 6) * 2) + 6 << "\n";
   }
   

   return 0;
}