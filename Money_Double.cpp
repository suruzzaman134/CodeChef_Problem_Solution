// Problem Link : https://www.codechef.com/problems/MONEYDOUBLE
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      while (y--)
      {
         if(x <= 1000) x += 1000;
         else x *= 2;
      }

      cout << x << "\n";
      
   }
   


   return 0;
}