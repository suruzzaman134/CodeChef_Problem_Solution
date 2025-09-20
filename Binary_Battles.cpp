// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, a, b; cin >> n >> a >> b; 

      int cnt = 0;
      while (n != 1)
      {
         cnt++;
         n /= 2;
      }

      cout << (cnt * a) + ((cnt - 1) * b) << "\n";
      
   }
   

   return 0;
}