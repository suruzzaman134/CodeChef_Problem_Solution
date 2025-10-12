// Problem Link : https://www.codechef.com/problems/FKMC
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
      int max_z = INT_MIN;
      int one = 0;
      int zero = 0;
      for(int i = 0; i < n; i++){
         if(s[i] == '1') one++;
         if(s[i] == '0') zero++;
         else zero = 0;
         max_z = max(max_z, zero);
      }

      cout << one + max_z << "\n";
   }
   

   return 0;
}