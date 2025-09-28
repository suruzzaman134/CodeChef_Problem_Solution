// Problem Link : https://www.codechef.com/problems/DARLIG
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int op, k; cin >> op >> k;
      if(k == 0){
         if(op % 4 == 0){
            cout << "Off" << "\n";
         }else{
            cout << "On" << "\n";
         }
      }else{
         if(op % 4 == 0) cout << "On" << "\n";
         else cout << "Ambiguous" << "\n";
      }
   }
   

   return 0;
}