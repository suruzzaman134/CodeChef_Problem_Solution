// Problem Link : https://www.codechef.com/problems/P2BAR
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

      bool zero = false;
      int one = 0;
      for(int i = 0; i < n; i++){
         if(zero && s[i] == '1') one++;
         if(s[i] == '0') zero = true;
      }

      cout << one << "\n";
   }
   

   return 0;
}