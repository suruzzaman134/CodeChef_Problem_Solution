// Problem Link : https://www.codechef.com/problems/TWOROLL
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      int need_move = 50 - x;
      int min_move = 2 * y;
      int max_move = (2 * y) + 10;

      if(need_move >= min_move && need_move <= max_move) cout << "Yes" << "\n";
      else cout << "No" << "\n";


      
   }
   

   return 0;
}