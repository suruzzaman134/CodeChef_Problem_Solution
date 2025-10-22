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

      int zero_one = 0, one_zero = 0;
      for(int i = 0; i < n - 1; i++){
         if(s[i] == '0' && s[i + 1] == '1') zero_one++;
         else if (s[i] == '1' && s[i + 1] == '0') one_zero++;
      }

      // cout << zero_one << " " << one_zero << "\n";

      if(abs(zero_one - one_zero <= 1) && zero_one > 0 && one_zero > 0) cout << "Alice" << "\n";
      else cout << "Bob" << "\n";
   }
   

   return 0;
}