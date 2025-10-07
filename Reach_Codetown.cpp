// Problem Link : https://www.codechef.com/problems/CODETOWN
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      bool flag = true;
      string s; cin >> s;

      for(int i = 0; i < 8; i++){
         if(i == 1 || i == 3 || i == 5){
            if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'){
               flag =false;
               break;
            }
         }else{
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
               flag =false;
               break;
            }
         }
      }

      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}