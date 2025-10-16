// Problem Link : https://www.codechef.com/START208D/problems/ALJMP
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int cur_pos = n;
      for(int i = 1; i < n; i++){
         if(i % 2 != 0){
            cur_pos = cur_pos - (n - i);
         }else{
            cur_pos = cur_pos + (n - i);
         }
      }

      cout << cur_pos << "\n";
      
   }
   

   return 0;
}