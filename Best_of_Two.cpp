// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a1, a2, a3, b1, b2, b3; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

      int alice = 0, bob = 0;
      
      if(a1 > a2){
         alice += a1;
         if(a2 > a3) alice += a2;
         else alice += a3;
      }else{
         alice += a2;
         if(a1 > a3) alice += a1;
         else alice += a3;
      }

      if(b1 > b2){
         bob += b1;
         if(b2 > b3) bob += b2;
         else bob += b3;
      }else{
         bob += b2;
         if(b1 > b3) bob += b1;
         else bob += b3;
      }

      if(alice > bob) cout << "Alice" << "\n";
      else if(alice == bob) cout << "Tie" << "\n";
      else cout << "Bob" << "\n";

   }
   

   return 0;
}