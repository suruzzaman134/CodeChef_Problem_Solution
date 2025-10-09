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
      int l = -1, r = -1;
      for(int i = 0; i < n; i++){
         if(l == -1 && s[i] == '1'){
            l = i;
         }
      }

      for(int i = n - 1; i >= 0; i--){
         if(r == -1 && s[i] == '1'){
            r = i;
         }
      }
      if(r != l && r != -1 && l != -1){
         int ans = 0;
         for(int i = l + 1; i < r; i++){
            if(s[i] == '0') ans++;
         }
         cout << ans << "\n";
      }else{
         cout << 0 << "\n";
      }
   }
   

   return 0;
}