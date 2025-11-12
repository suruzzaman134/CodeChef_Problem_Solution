// Problem Link : https://www.codechef.com/problems/BSHORT
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;
      int one = 0;
      for(int i = 0; i < n; i++) if(s[i] == '1') one++;
      if(one > 0 ) cout << one % 2 << "\n";
      else cout << n << "\n";
   }
   

   return 0;
}