// Problem Link : https://www.codechef.com/problems/FLOWERBUY?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int f; cin >> f;
      int cost = 0;
      while (f % 3 != 0)
      {
         f -= 2;
         cost += 4;
      }
      
      cost += (f / 3) * 5;

      cout << cost << "\n";
   }
   

   return 0;
}