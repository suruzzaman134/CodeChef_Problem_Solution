// Problem Link : https://www.codechef.com/START211D/problems/WOLFDOWN
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
      for(int i = 0; i < n; i++){
         if(s[i] == '1'){
            break;
         }
         else ans++;
      }

      cout << ans << "\n";
   }
   

   return 0;
}