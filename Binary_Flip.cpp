// Problem Link : https://www.codechef.com/problems/P4BAR
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

      int one_2 = 0, zero_2 = 0;

      for(int i = 0; i < n - 1; i++){
         if(s[i] == '1' && s[i+1] == '1'){
             one_2++;
         }
         if(s[i] == '0' && s[i+1] == '0'){
             zero_2++;
         }
      }


      if(one_2 >= zero_2 ) cout << 0 << "\n";
      else{
         cout << ((zero_2 - one_2 + 1) / 2) << "\n";
      }
   }
   

   return 0;
}