// Problem Link : https://www.codechef.com/problems/HUGE_GRID_EZ?tab=statement
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

      int ans = 0;
      bool increase_i = false;
      int i = 0, j = 0;

      while (i < n && j < n)
      {
         if(i == j){
            ans += s[i] - '0';
         }else{
            ans += (s[i] - '0') + (s[j] - '0');
         }

         if(increase_i) i++;
         else j++;

         increase_i = !increase_i;
      }

      cout << ans << "\n";
      
   }
   

   return 0;
}