#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;
      int ans = 0;
      for(int i = n - 1; i >= 0; i--){
         if(s[i] == '1') break;
         else{
            ans++;
            s.pop_back();
         }
      }
      int s_idx = -1;
      for(int i = 0; i < s.size(); i++){
         if(s[i] == '0'){
             s_idx = i;
             break;
         }
         else{
            ans++;
         }
      }
      int zero = 0, one = 0;

      for(int i = s_idx; i < s.size(); i++){
         if(s[i] == '1') one++;
         else zero++;

         if(s[i] == '0' && one > 0){
            
            ans += abs((zero - 1) - one);
            zero = 1;
            one = 0;
         }
      }

      ans += abs(zero - one);


      cout << ans << "\n";
      
   }
   

   return 0;
}