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
      vector<bool> mark(n, false);

      for(int i = 1; i < n - 1; i++){
         if(s[i] == '1' && s[i-1] == '1' && s[i+1] == '1'){
            mark[i] = mark[i+1] = mark[i-1] = true;
         }
      }

      bool flag = true;

      for(int i = 0; i < n; i++){
         if(s[i] == '1' && !mark[i]){
            flag = false;
            break;
         }
      }

      if(flag) cout << "Yes" << "\n";
      else cout << "No" << "\n";

   }
   

   return 0;
}