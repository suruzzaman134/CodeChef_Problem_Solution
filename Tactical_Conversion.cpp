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

      int one = 0;
      bool zero = false;
   
      for(int i = 0; i < n; i++){
         if(s[i] == '1') one++;
         if(s[i] == '0') zero = true;
      }

      if(one == 2 || one == 3){
         bool flag = true;
         if(one == 2){
            for(int i = 0; i < n; i++){
               if(s[i] == '1' && s[i +1] == '1'){
                  flag = false;
                  break;
               }
            }
         }else{
            for(int i = 0; i < n; i++){
               if(s[i] == '1' && s[i +1] == '1' && s[i + 2] == '1'){
                  flag = false;
                  break;
               }
            }
         }

         if(flag) cout << "Yes" << "\n";
         else cout << "No" << "\n";
      }
      else if(one <= 1 || one > 3) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}