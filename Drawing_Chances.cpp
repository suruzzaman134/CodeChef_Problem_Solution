// Problem Link : https://www.codechef.com/problems/DRAWCH
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      string s; cin >> s;

      int alice = 0, bob = 0, rem;

      for(char ch: s){
         if(ch == '1') alice++;
         else bob++;
      }
      
      rem = n - m;

      if(n % 2 != 0 || abs(alice - bob) > rem) cout << "No" << "\n";
      else{
         cout << "Yes" << "\n";
      }
   }
   

   return 0;
}