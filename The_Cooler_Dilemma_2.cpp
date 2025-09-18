// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;

      if(x >= y) cout << 0 << "\n";
      else cout << (y - 1) / x << "\n";
   }
   

   return 0;
}